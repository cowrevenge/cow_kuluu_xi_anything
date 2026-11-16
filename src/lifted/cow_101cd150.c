/* f_0x101cd150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cd150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 + 4u);
    t1 = rd32(self + 0x14u) + rd32(sp0 + 4u);
    wr32(sp0 - 4u, t1);
    t2 = arg2 + rd32(self + 0x1cu);
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101ccec0u), self, 3, sp0 - 4u, sp0 + 4u, sp0 + 4u);
    t3 = g->edx;
    if (rd32(sp0 - 4u) != rd32(self + 0x14u))
    {
        eax = rd32(self + 0x14u);
        edx = t3;
        ebp = rd32(sp0 - 4u);
        goto L_101cd1a3;
    }
    ebp = rd32(sp0 - 4u);
    if (rd32(sp0 + 4u) != rd32(self + 0x1cu))
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(sp0 + 4u);
        goto L_101cd1a3;
    }
    eax = rd32(self + 0x1cu);
    return eax & 0xffffff00u;
L_101cd1a3: ;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        if ((int32_t)rd32(self + 0x6cu) > 0)
        {
            ebx = 0u;
            edi = self + 0x70u;
L_101cd1bc: ;
            if (rd32(edi) != 0u)
            {
                ecx = rd32(edi);
                t6 = rd32(sp0 + 4u) - rd32(self + 0x1cu);
                wr32(sp0 - 0x18u, t6);
                t7 = ebp - rd32(self + 0x14u);
                wr32(sp0 - 0x1cu, t7);
                g->edx = t7;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x101cd290u), ecx, 2, t7, t6);
                t8 = g->edx;
                edx = t8;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                ebx = ebx + 1u;
                edi = edi + 4u;
                goto L_101cd1bc;
            }
        }
    }
    t9 = rd32(sp0 + 4u);
    wr32(self + 0x14u, ebp);
    wr32(self + 0x1cu, t9);
    wr32(self + 0x18u, 0u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x101cec00u), self, 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        g->eax = eax;
        g->edx = edx;
        t12 = rd32(self + 0x14u);
        g->esp = sp0 - 0x14u;
        t13 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
        t14 = g->edx;
        if ((int32_t)t12 >= (int32_t)(t13 + rd32(self + 0x14u))) goto L_101cd26b;
        eax = t13 + rd32(self + 0x14u);
        edx = t14;
        ebx = t12;
L_101cd211: ;
        g->eax = eax;
        g->edx = edx;
        t15 = rd32(self + 0x1cu);
        g->esp = sp0 - 0x14u;
        t16 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
        t17 = g->edx;
        if ((int32_t)t15 >= (int32_t)(t16 + rd32(self + 0x1cu)))
        {
            eax = t16 + rd32(self + 0x1cu);
            edx = t17;
            goto L_101cd25c;
        }
        eax = t16 + rd32(self + 0x1cu);
        edx = t17;
        edi = t15;
L_101cd222: ;
        if ((int32_t)ebx < 20)
        {
            if ((int32_t)edi < 26)
            {
                wr32(sp0 - 0x18u, edi);
                wr32(sp0 - 0x1cu, ebx);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t18 = cow_thiscall(g, COW_IMG(0x101d5df0u), rd32(COW_IMG(0x106631d4u)), 2, ebx, edi);
                t19 = g->edx;
                if ((int32_t)t18 <= 0)
                {
                    eax = t18;
                    edx = t19;
                }
                else
                {
                    eax = t18;
                    edx = t19;
                    wr32(sp0 - 0x18u, edi);
                    wr32(sp0 - 0x1cu, ebx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t20 = cow_thiscall(g, COW_IMG(0x101d5df0u), rd32(COW_IMG(0x106631d4u)), 2, ebx, edi);
                    t21 = g->edx;
                    wr32(self + 0x18u, t20);
                    eax = t20;
                    edx = t21;
                }
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t22 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
        t23 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)(t22 + rd32(self + 0x1cu)))
        {
            eax = t22 + rd32(self + 0x1cu);
            edx = t23;
            edi = edi + 1u;
            goto L_101cd222;
        }
        eax = t22 + rd32(self + 0x1cu);
        edx = t23;
L_101cd25c: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t24 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
        t25 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)(t24 + rd32(self + 0x14u)))
        {
            eax = t24 + rd32(self + 0x14u);
            edx = t25;
            ebx = ebx + 1u;
            goto L_101cd211;
        }
    }
L_101cd26b: ;
    t26 = rd32(self + 0x1cu);
    wr32(sp0 - 0x18u, t26);
    t27 = rd32(self + 0x18u);
    wr32(sp0 - 0x1cu, t27);
    t28 = rd32(self + 0x14u);
    wr32(sp0 - 0x20u, t28);
    t29 = (uint32_t)(int8_t)rd8(self + 6u);
    wr32(sp0 - 0x24u, t29);
    g->eax = t28;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x101cdd90u), self, 4, t29, t28, t27, t26);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 8u);
    return (t30 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cd150(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
