#include <stdio.h>

int main() {
    int readingTime, writingTime;

    printf("Confession posts par padhne ka waqt (minutes) daalain: ");
    scanf("%d", &readingTime);
    printf("Confession post likhne ka waqt (minutes) daalain: ");
    scanf("%d", &writingTime);

    int totalTime = readingTime + writingTime;

    if (totalTime > 120) {
        printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! "
               "Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye "
               "hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur "
               "apne goals par focus karo!\n");
    } else if (totalTime >= 60 && totalTime <= 120) {
        printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho, "
               "thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? Zindagi mein "
               "aise activities ka balance rakhna seekho, warna regret ho ga baad mein!\n");
    } else {
        printf("Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, aur "
               "phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. "
               "Parhai aur apne goals pe dhyan rakho, shabash!\n");
    }

    return 0;
}