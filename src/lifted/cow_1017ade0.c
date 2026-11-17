/* f_0x1017ade0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1017ade0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + 0x39138u, 0xffffffffu);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(t1) + 0xc8u), rd32(t1), 3, t1, 0x8fu, 0u);
    wr32(self + 0x39118u, 0u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    t3 = rd32(t2);
    cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0x1cu, 1u);
    t4 = g->ecx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
    {
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t4 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
        goto L_1017aed6;
    }
    eax = rd32(COW_IMG(0x1045666cu));
    ecx = (t4 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
    t5 = rd32(eax + 0xcu);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t6 + 0xc8u), ecx, 3, t5, 0x8cu, 0u);
    t7 = g->edx;
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x23u, 3u);
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    edx = rd32(COW_IMG(0x1045666cu));
L_1017ae6d: ;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x30u, 0u);
L_1017ae79: ;
    t16 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)rd32(t16 + 0x40u) > 0)
    {
        eax = rd32(t16 + 0x40u);
        ebx = rd32(t16 + 0x3cu);
        ebp = t16;
        ebx = ebx + 0x1a9u;
L_1017ae91: ;
        if (rd8(ebx) != 0u)
        {
            esi = 0u;
            edi = ebx - 0x11u;
L_1017ae9c: ;
            t17 = rd32(ebp + 0x64u);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x10183da0u), self, 2, t17, rd32(edi));
            if ((int32_t)(esi + 1u) < (int32_t)rd8(ebx))
            {
                esi = esi + 1u;
                edi = edi + 4u;
                goto L_1017ae9c;
            }
        }
        t18 = rd32(sp0 + 4u) + 1u;
        t19 = rd32(sp0 + 4u);
        t20 = rd32(ebp + 0x40u);
        wr32(sp0 + 4u, t18);
        if ((int32_t)(t19 + 1u) < (int32_t)t20)
        {
            eax = t18;
            ebx = ebx + 0x1acu;
            goto L_1017ae91;
        }
    }
    return;
L_1017aed6: ;
    if (rd8(eax + 0x92eu) == 0u) goto L_1017ae79;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x92eu);
    t9 = rd32(eax + 0xcu);
    g->edx = rd32(t9);
    t10 = rd32(t9);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t10 + 0xc8u), ecx, 3, t9, 0x8cu, 3u);
    t11 = g->edx;
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = t11;
    t13 = rd32(t12);
    cow_thiscall(g, rd32(t13 + 0xc8u), t13, 3, t12, 0x23u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t15;
        goto L_1017ae6d;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (t14 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 3, eax, 0x30u, 1u);
    goto L_1017ae79;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017ade0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017ade0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
