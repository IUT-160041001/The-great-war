#include <stdio.h>
#include <string.h>
int part2(int num)
{
    FILE *fp;
    int i,j,k,ar1,ar2,ar3,sp1,sp2,sp3,sp4,sw1,sw2,sw3,sw4,sw5,sw6;
    char move,choice,ch;
    char a[65000],b[65000],c[65000],d[65000];
    if(num==1)
    {
        system("cls");
        fp=fopen("spearman4.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n1.You stick to your original plan 2.Fight for your glory\n");
                printf("\nEnter your choice:\n");
                scanf("%d",&sp1);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
        fclose(fp);
        if(sp1==1)
        {
            printf("You raid all the villages and attack garisoned unit, you are actually successful in this. you loot a huge amount of gold and you’ll be rich after this war.  \nAfter quite some time when you know you’re gonna win this war. The reinforcement comes and that is huge.\nSo you....");
            printf("\n1.Attack with all your might 2.Retreat and regroup\n");
            scanf("%d",&sp2);
            if(sp2==1)
            {
                printf("the army is too big for your side to handle. you lose, and you get caught while fleeing. As the general is of a village\nyou raided he first tortures you to get revenge then kill you .");
                return 0;
            }
            else if(sp2==2)
            {
                printf("You temporarily fall back. it was a good idea. You’re getting reinforcement from main unit. With this you defeat the reinforcement. \nThe mighty Bavaria wins.");
                return 0;
            }
        }
        else if(sp1==2)
        {
            system("cls");
            fp=fopen("spearman5.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\nEnter your choice:");
                    scanf("%d",&sp2);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(sp2==1)
            {
                printf("You join the army and the surprise attack on the enemy fails. The enemy recovers and pounces on the army. \nAfter fighting with bravery you die");
                return 0;
            }
            else if(sp2==2)
            {
                system("cls");
                fp=fopen("spearman6.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.You perform a heavy attack 2.you defend\n");
                        printf("Enter your choice:");
                        scanf("%d",&sp3);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(sp3==2)
                {
                    printf("\nYou defend. However the mighty general overpowers you and you die");
                    return 0;
                }
                else if(sp3==1)
                {
                    system("cls");
                    fp=fopen("spearman7.txt","r");
                    if(fp==NULL)
                    {
                        printf("Error");
                        return 0;
                    }
                    for(i=0;i<10000;i++)
                    {
                        a[i]=fgetc(fp);
                        if(feof(fp))
                        {
                            printf("\n1.You decide to finish it with one thrust 2.You take the opponent lightly\n");
                            printf("Enter your choice:");
                            scanf("%d",&sp4);
                            break;
                        }
                        if(ferror(fp))
                        {
                            printf("Error");
                            return 0;
                        }
                        printf("%c",a[i]);
                    }
                    fclose(fp);
                    if(sp4==1)
                    {
                        printf("\nYou decide to use your remaining power in one killing thrust.  After dodging several times you managed to land the killing blow through his heart. he is dead. the glory is yours.");
                        return 0;
                    }
                    if(sp4==2)
                    {
                        printf("\nYou decide to take the enemy lightly. However the enemy was waiting for this specific moment and launches a counter attack.\nYou fail to defend you die");
                        return 0;
                    }
                }
            }

        }


    }
    else if(num==2)
    {
        system("cls");
        fp=fopen("archer4.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n1.Raid the village 2.Stay quite in the cold\n");
                printf("Enter your choice:");
                scanf("%d",&ar1);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
        fclose(fp);
        if(ar1==1)
        {
            system("cls");
            printf("You raid the village your soldiers are happy yo have warm food.\nBut suddenly you notice that you are surrounded by the enemy.Its the enemy troops stationed at the hill !!! your mission is failed.");
        }
        else if(ar1==2)
        {
            system("cls");
            fp=fopen("archer3.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\n1.Go with them 2.Explore the castle\n");
                    printf("Enter your choice:");
                    scanf("%d",&ar2);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(ar2==1)
            {
                printf("You find the line of defense. The muskets which are the state of the art weapon is overpowering the enemy.You win the battle");
                return 0;
            }
            else if(ar2==2)
            {
                system("cls");
                fp=fopen("archer5.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.Shoot 2.Don't shoot\n");
                        printf("Enter your choice:\n");
                        scanf("%d",&ar3);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(ar3==1)
                {
                    system("cls");
                    printf("You shoot and kill the King and the enemy soldiers shoot your commander.\nBut the king's death caused them to hesitate for a bit and your troops used this moment to capture all the enemy soldier's");
                    return 0;
                }
                else if(ar3==2)
                {
                    system("cls");
                    printf("You don't shoot.\n The soldiers with musket kill your commander and your troops are in a state of panic.\n Within this short span of time the enemy soldiers overpower you and kill you");
                    return 0;
                }
            }
        }

    }
    else if(num==3)
    {
        system("cls");
        fp=fopen("swordman3.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\nEnter your choice\n");
                scanf("%d",&sw1);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
        fclose(fp);
        if(sw1==1)
        {
            system("cls");
            fp=fopen("swordman4.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                b[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\nThank you for playing the game");
                    return 0;
                }
                if(ferror(fp))
                {
                    printf("error");
                    return 0;
                }
                printf("%c",b[i]);
            }
            fclose(fp);
        }
        else if(sw1==2)
        {
            system("cls");
            fp=fopen("swordman5.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\nEnter your choice:");
                    scanf("%d",&sw2);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
        }
    }

}


int loadgame()
{
    FILE *fp;
    int i,j,k,ar1,ar2,ar3,sp1,sp2,sp3,sp4,sw1,sw2,sw3;
    char ch,move,choice;
    char a[65000],b[65000],c[65000],d[65000];
    fp=fopen("load.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        return 0;
    }
    ch=fgetc(fp);
    fclose(fp);
    if(ch=='1')
    {
        system("cls");
        fp=fopen("spearman4.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n1.You stick to your original plan 2.Fight for your glory\n");
                printf("\nEnter your choice:\n");
                scanf("%d",&sp1);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
        fclose(fp);
        if(sp1==1)
        {
            printf("You raid all the villages and attack garisoned unit, you are actually successful in this. you loot a huge amount of gold and you’ll be rich after this war.  \nAfter quite some time when you know you’re gonna win this war. The reinforcement comes and that is huge.\nSo you....");
            printf("\n1.Attack with all your might 2.Retreat and regroup\n");
            scanf("%d",&sp2);
            if(sp2==1)
            {
                printf("the army is too big for your side to handle. you lose, and you get caught while fleeing. As the general is of a village\nyou raided he first tortures you to get revenge then kill you .");
                return 0;
            }
            else if(sp2==2)
            {
                printf("You temporarily fall back. it was a good idea. You’re getting reinforcement from main unit. With this you defeat the reinforcement. \nThe mighty Bavaria wins.");
                return 0;
            }
        }
        else if(sp1==2)
        {
            system("cls");
            fp=fopen("spearman5.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\nEnter your choice:");
                    scanf("%d",&sp2);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(sp2==1)
            {
                printf("You join the army and the surprise attack on the enemy fails. The enemy recovers and pounces on the army. \nAfter fighting with bravery you die");
                return 0;
            }
            else if(sp2==2)
            {
                system("cls");
                fp=fopen("spearman6.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.You perform a heavy attack 2.you defend\n");
                        printf("Enter your choice:");
                        scanf("%d",&sp3);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(sp3==2)
                {
                    printf("\nYou defend. However the mighty general overpowers you and you die");
                    return 0;
                }
                else if(sp3==1)
                {
                    system("cls");
                    fp=fopen("spearman7.txt","r");
                    if(fp==NULL)
                    {
                        printf("Error");
                        return 0;
                    }
                    for(i=0;i<10000;i++)
                    {
                        a[i]=fgetc(fp);
                        if(feof(fp))
                        {
                            printf("\n1.You decide to finish it with one thrust 2.You take the opponent lightly\n");
                            printf("Enter your choice:");
                            scanf("%d",&sp4);
                            break;
                        }
                        if(ferror(fp))
                        {
                            printf("Error");
                            return 0;
                        }
                        printf("%c",a[i]);
                    }
                    fclose(fp);
                    if(sp4==1)
                    {
                        printf("\nYou decide to use your remaining power in one killing thrust.  After dodging several times you managed to land the killing blow through his heart. he is dead. the glory is yours.");
                        return 0;
                    }
                    if(sp4==2)
                    {
                        printf("\nYou decide to take the enemy lightly. However the enemy was waiting for this specific moment and launches a counter attack.\nYou fail to defend you die");
                        return 0;
                    }
                }
            }

        }

    }
    else if(ch=='2')
    {
        system("cls");
        fp=fopen("archer4.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n1.Raid the village 2.Stay quite in the cold\n");
                printf("Enter your choice:");
                scanf("%d",&ar1);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
        fclose(fp);
        if(ar1==1)
        {
            system("cls");
            printf("You raid the village your soldiers are happy yo have warm food.\nBut suddenly you notice that you are surrounded by the enemy.Its the enemy troops stationed at the hill !!! your mission is failed.");
        }
        else if(ar1==2)
        {
            system("cls");
            fp=fopen("archer3.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\n1.Go with them 2.Explore the castle\n");
                    printf("Enter your choice:");
                    scanf("%d",&ar2);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(ar2==1)
            {
                printf("You find the line of defense. The muskets which are the state of the art weapon is overpowering the enemy.You win the battle");
                return 0;
            }
            else if(ar2==2)
            {
                system("cls");
                fp=fopen("archer5.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.Shoot 2.Don't shoot\n");
                        printf("Enter your choice:\n");
                        scanf("%d",&ar3);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(ar3==1)
                {
                    system("cls");
                    printf("You shoot and kill the King and the enemy soldiers shoot your commander.\nBut the king's death caused them to hesitate for a bit and your troops used this moment to capture all the enemy soldier's");
                    return 0;
                }
                else if(ar3==2)
                {
                    system("cls");
                    printf("You don't shoot.\n The soldiers with musket kill your commander and your troops are in a state of panic.\n Within this short span of time the enemy soldiers overpower you and kill you");
                    return 0;
                }
            }
     }
}
    else if(ch=='3')
    {
        system("cls");
        fp=fopen("","r");
        if(fp==NULL)
        {
            printf("Error");
            return 0;
        }
        for(i=0;i<10000;i++)
        {
            a[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n");
                printf("\nEnter your choice\n");
                scanf("%d",&sw1);
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",a[i]);
        }
    }
}
int main()
{
    //system("COLOR 87");
    int i,j,k,c1=1,c2=0,choice,num,sp1,sp2,sp3,ar1,ar2,ar3,sw1,sw2,sw3,oppa;
    FILE *fp,*fp1,*fp2,*fp3,*fp4;
    char m,ch,de;
    char s[65000],a[65000],b[65000],c[65000];
    while(1)
    {
        printf("\t\t\tTHE GREAT WAR PART-1\n");
        printf("Use arrow keys to w,s to move\n");
        if(c1)printf("->1.New game\n2.Load game");
        else if(c2)printf("1.New game\n->2.Load game");
        m=getche();
        if(m==13)
        {
            system("cls");
            break;
        }
        else if(m=='w')
        {
            if(c1)
            {
                c1=0,c2=1;
            }
            else if(c2)
            {
                c1=1,c2=0;
            }
        }
        else if(m=='s')
        {
            if(c1)
            {
                c1=0,c2=1;
            }
            else if(c2)
            {
                c1=1,c2=0;
            }
        }
        system("cls");
    }
    if(c1)
        choice=1;
    else if(c2)
        choice=2;
    if(choice==1)
    {
        fp=fopen("intro.txt","r");
        if(fp==NULL)
        {
            printf("Error");
            exit(1);
        }
        for(i=0; i<10000; i++)
        {
            s[i]=fgetc(fp);
            if(feof(fp))
            {
                printf("\n1.Spearmen 2.Archer 3.Swordsman 4.Leave the premises\n");
                printf("Choose a number:");
                scanf("%d",&num);
                break;
            }
            if(ferror(fp))
            {
                printf("Error");
                return 0;
            }
            printf("%c",s[i]);
        }
        fclose(fp);
        if(num==4)
        {
            printf("You try to leave the premises but the commander decides to kill you and you fail to defend yourself and see yourself lying in a pool of blood you die");
            return 0;
        }
        if(num==1)
        {
            system("cls");
            fp=fopen("spearman1.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                exit(1);
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\n1.Reinforce the army 2.You stick to your mission\n");
                    printf("Enter your choice:");
                    scanf("%d",&sp1);
                    break;

                }
                if(ferror(fp))
                {
                    printf("error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(sp1==1)
            {
                printf("\nYou join the main army.\nThe fight becomes stable for now but eventually the siege tower breaches the wall\nClover's army is better organized and eventually defeats your army to capture the castle");
                return 0;
            }
            else if(sp1==2)
            {
                system("cls");
                fp=fopen("spearman2.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    exit(1);
                }
                for(i=0;i<10000;i++)
                {
                    s[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.Attack the guards with full force 2.Dispatch some of your men and attack the enemy leader\n");
                        printf("Enter your choice:");
                        scanf("%d",&sp2);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",s[i]);

                }
                fclose(fp);
                if(sp2==1)
                {
                    system("cls");
                    printf("\nYou attack the guards with full force.\n However you the leader runs away quickly. As you turn around the siege tower breaches the wall and you lost the war");
                    return 0;
                }
                else if(sp2==2)
                {
                    system("cls");
                    fp=fopen("spearman3.txt","r");
                    if(fp==NULL)
                    {
                        printf("Error");
                        return 0;
                    }
                    for(i=0;i<10000;i++)
                    {
                        s[i]=fgetc(fp);
                        if(feof(fp))
                        {
                            printf("\n1.Use the spear and shields to form a shield sphere 2.Retreat and regroup\n");
                            printf("Enter you choice:");
                            scanf("%d",&sp3);
                            break;
                        }
                        if(ferror(fp))
                        {
                            printf("error");
                            return 0;
                        }
                        printf("%c",s[i]);
                    }
                    fclose(fp);
                    if(sp3==2)
                    {
                        system("cls");
                        printf("\nYou retreat and regroup with other soldiers. Your army takes a formation to defend against chariots\nHowever the formation wasn't strong enough to stop the chariots attack.You die during the attack\n");
                        return 0;
                    }
                    else if(sp3==1)
                    {
                        printf("\nYou form the shield sphere with your troops and brace yourself\n.The spikes in the shields puncture the chariot's tire. The chariots flip over\nThe troops from the back observe this and surges forward\n.Through a swift attack you charge forward and reach enemy castle\n");
                        fp=fopen("load.txt","w");
                        ch='1';
                        fputc(ch,fp);
                        fclose(fp);
                        printf("do you want to continue the game?press y or n");
                        de=getche();
                        if(de=='y')
                            part2(num);
                        else if(de=='n')
                            return 0;
                    }
                }
            }
        }
        if(num==3)
        {
            system("cls");
            fp=fopen("swordman1.txt","r");
            if(fp==NULL)
            {
                printf("error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                a[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\n1.Continue with pincer attack 2.Regroup and retreat\n");
                    printf("Enter your choice:");
                    scanf("%d",&sw1);
                    break;
                }
                if(ferror(fp))
                {
                    printf("Error");
                    return 0;
                }
                printf("%c",a[i]);
            }
            fclose(fp);
            if(sw1==1)
            {
                system("cls");
                printf("Furious with rage you decide to continue the enemy attack and you are surrounded by enemy and you see the enemy breaking your defense line quickly\nThey breach the castle. You lose and become captive to Clover state");
                return 0;
            }
            else if(sw1==2)
            {
                system("cls");
                fp=fopen("swordman2.txt","r");
                if(fp==NULL)
                {
                    printf("error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.Wait for reinforcements 2.Dispatch several squadrons to strike enemy at critical points\n");
                        printf("Enter your choice:");
                        scanf("%d",&sw2);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(sw2==1)
                {
                    system("cls");
                    printf("\nYou wait for reinforcements and march forward. With superior might you take down the incoming waves of enemy.\nThe enemy could not handle the strength and number of your men but they decided to fight back\nHowever they could not hold their ground and they lost\nYou arrive at the castle");
                }
                else if(sw2==2)
                {
                    system("cls");
                    printf("\nYou dispatch troops and attack on critical points,\nThe enemy facing the immense strength of the troops couldn't handle the suprise attacks and died. You now have several openings to exploit");
                }
                fp=fopen("load.txt","w");
                ch='3';
                fputc(ch,fp);
                fclose(fp);
                printf("do you want to continue press y for yes, n for no");
                de=getche();
                if(de=='y')
                   part2(num);
                else if(de=='N')
                    return 0;
            }
        }
        if(num==2)
        {
            system("cls");
            fp=fopen("omar.txt","r");
            if(fp==NULL)
            {
                printf("Error");
                return 0;
            }
            for(i=0;i<10000;i++)
            {
                b[i]=fgetc(fp);
                if(feof(fp))
                {
                    printf("\n1.Shoot Arrows at the enemy siege tower.\n2.Shoot arrows at the Clover army leader.\n");
                    printf("Enter your choice:");
                    scanf("%d",&ar1);
                    break;
                }
                if(ferror(fp))
                {
                    printf("error");
                    return 0;
                }
                printf("%c",b[i]);
            }
            fclose(fp);
            if(ar1==1)
            {
                system("cls");
                fp=fopen("a1.txt","r");
                if(fp==NULL){
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\nThe enemy breached the wall and you lost the war");
                        return 0;
                    }
                    if(ferror(fp))
                    {
                        printf("error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
            }
            else if(ar1==2)
            {
                system("cls");
                fp=fopen("archer2.txt","r");
                if(fp==NULL)
                {
                    printf("Error");
                    return 0;
                }
                for(i=0;i<10000;i++)
                {
                    a[i]=fgetc(fp);
                    if(feof(fp))
                    {
                        printf("\n1.Throw burning Logs and stones from the castle wall on top of the enemies.2.You decide to retreat and regroup to re-strategize and push back again.\n");
                        printf("Enter your choice:");
                        scanf("%d",&ar3);
                        break;
                    }
                    if(ferror(fp))
                    {
                        printf("Error");
                        return 0;
                    }
                    printf("%c",a[i]);
                }
                fclose(fp);
                if(ar3==1)
                {
                    system("cls");
                    printf(" As the enemy knights and soldiers were scaling the wall they took serious damage from the logs and stones. \nThe scaling failed, as the front line of enemy got lighter and weaken Bavarian troops attacked the enemies with full force. \nThe push back was successful this time. \nClover forces and commander died miserably. the day was saved thanks to your clever and tactical decisions .\n");
                    printf("\nThere is a rumor going on that state of the arts weapon were brought by the clover kingdom.\nSo the commander decides to send you to castle in disguise to recover the weapon and kill the king");
                    fp=fopen("load.txt","w");
                    ch='2';
                    fputc(ch,fp);
                    fclose(fp);
                    printf("\ndo you want to continue the game?press y or n\n");
                    de=getche();
                    if(de=='y')
                        part2(num);
                    else if(de=='n')
                        return 0;

                }
                else if(ar3==2)
                {
                    system("cls");
                    printf("As you retreated the enemy got the chance to scale the wall. you lose the possession of the higher ground of the castle. \nLater defending all the clover knights and swordsman were really difficult for the guards. \nSoon the towers started to fall to the enemies and hundreds of Bavarian troops got butchered and the remaining got captured. \nIn the Battle of the Great war the Bavarian castle collapse to Clover mighty army.");
                    return 0;
                }
        }

        }
    }
    else if(choice==2)
    {
        system("cls");
        loadgame();
    }
    return 0;
}
