//calculate the ratio value/weight for each item and sort the item on the basis of this ratio
//Then take the item with the highest ratio and add them until we can’t add the next item as a whole and at the end add the next item as much as we can.

    #include <stdio.h>

    int n = 5; /*number of objects */
    int price[10] = {12, 1, 2, 1, 4}; 
    /* price[i] is the *PRICE* of the ith object*/
    int weight[10] = {4, 2, 2, 1, 10}; 
    /* weight[i] is the *weight* of the ith object*/

    int W = 10; /* The maximum weight you can take */

    void fill() {

        int cur_w;
        float tot_v;
        int i, maxi;
        int used[100];

        for (i = 0; i < n; ++i)

            used[i] = 0; /* I have not used the ith object yet */
            cur_w = W;

        while (cur_w > 0) { /* while there's still room*/
                          /* Find the best object */

            maxi = -1;

            for (i = 0; i < n; ++i)

                if ((used[i] == 0) &&

                    ((maxi == -1) || ((float)weight[i]/price[i] > (float)weight[maxi]/price[maxi])))

                    maxi = i;

            used[maxi] = 1; /* mark the maxi-th object as used */

            cur_w -= price[maxi]; /* with the object in the bag, I can carry less */

            tot_v += weight[maxi];

            if (cur_w >= 0)

                printf("Added object %d (Rs.%d, %dKg) completely in the bag. Space left: %d.\n", maxi + 1, weight[maxi], price[maxi], cur_w);

            else {

                printf("Added %d%% (Rs.%d, %dKg) of object %d in the bag.\n", (int)((1 + (float)cur_w/price[maxi]) * 100), weight[maxi], price[maxi], maxi + 1);

                tot_v -= weight[maxi];

                tot_v += (1 + (float)cur_w/price[maxi]) * weight[maxi];

            }
        }

        printf("Filled the bag with objects worth Rs.%.2f.\n", tot_v);

    }

    int main(int argc, char *argv[]) {
        fill();
        return 0;

    }
