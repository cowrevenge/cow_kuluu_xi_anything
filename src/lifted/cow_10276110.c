/* f_0x10276110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10276110(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_10276134;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2e24u), arg2);
    return 0u;
L_10276134: ;
    if (rd32(arg1 - 0x10u) != 0xabbadabau)
    {
        eax = rd32(arg1 - 0x10u);
        goto L_1027615c;
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2df8u), arg2);
    return 0u;
L_1027615c: ;
    if (eax != 0xdeadbeefu) goto L_1027617e;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2dc8u), arg2);
    return 0u;
L_1027617e: ;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10275310u), 1, arg1);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_102761ba;
    }
    eax = t1;
    t3 = COW_IMG(0x103b2850u) + eax * 0x10u;
    g->eax = t3;
    g->ecx = arg3;
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2d8cu), t3);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102755e0u), g->eax, g->ecx, t6, 1, 2, arg1 - 0x10u, 0x100u);
    return 0u;
L_102761ba: ;
    t7 = rd32(arg1 - 0xcu);
    edi = edx;
    eax = 0xeeeeeeeeu;
    ecx = t7 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t7 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(arg1 - 0x10u, rd32(COW_IMG(0x103b2848u)));
    g->ecx = ecx;
    t8 = rd32(COW_IMG(0x103b2848u));
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10275690u), 1, edx);
    t10 = g->ecx;
    if (t9 != 0u)
    {
        ecx = t10;
        ebx = t9;
        if (rd32(ebx + 0x54u) < rd32(ebx + 0x58u))
        {
            edx = rd32(ebx + 0x54u);
            esi = rd32(ebx + 0x58u);
L_102761f9: ;
            if (rd32(edx) == 0xabbadabau) goto L_10276209;
            eax = rd32(edx);
            if (eax != 0xdeadbeefu) goto L_1027625b;
L_10276209: ;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x10275340u), 1, edx);
            t12 = g->ecx;
            t13 = g->edx;
            if (t11 >= esi)
            {
                eax = t11;
                ecx = t12;
                edx = t13;
                goto L_10276253;
            }
            eax = t11;
            ecx = t12;
            edx = t13;
L_10276216: ;
            if (rd32(eax) == 0xcafefeedu) goto L_10276253;
            t14 = rd32(edx + 4u) + 0x10u;
            wr32(edx + 4u, t14);
            t15 = t14 + rd32(eax + 4u);
            wr32(edx + 4u, t15);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t16 = cow_cdecl(g, COW_IMG(0x10275340u), 1, eax);
            t17 = g->edx;
            wr32(eax, 0xeeeeeeeeu);
            wr32(eax + 4u, 0xeeeeeeeeu);
            wr32(eax + 8u, 0xeeeeeeeeu);
            wr32(eax + 0xcu, 0xeeeeeeeeu);
            if (t16 < rd32(ebx + 0x58u))
            {
                eax = t16;
                ecx = 0xeeeeeeeeu;
                edx = t17;
                goto L_10276216;
            }
            eax = t16;
            ecx = 0xeeeeeeeeu;
            edx = t17;
L_10276253: ;
            if (eax >= rd32(ebx + 0x58u))
            {
                wr32(ebx + 0x58u, edx);
            }
L_1027625b: ;
            g->ecx = ecx;
            g->esp = sp0 - 0x10u;
            t18 = cow_cdecl(g, COW_IMG(0x10275340u), 1, edx);
            t19 = g->ecx;
            if (t18 < rd32(ebx + 0x58u))
            {
                ecx = t19;
                edx = t18;
                esi = rd32(ebx + 0x58u);
                goto L_102761f9;
            }
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10276110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10276110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
