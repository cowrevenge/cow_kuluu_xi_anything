/* f_0x10124a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10124a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(self + 0x60u) & 2u) == 0u)
    {
        eax = rd32(self + 0x60u);
        t1 = rd32(self + 0x5cu);
        t2 = rd32(self + 0x58u);
        wr32(self + 0x60u, eax | 2u);
        t3 = rd32(self + 4u);
        wr32(self + 0x68u, 2u);
        t4 = rd32(self + 8u);
        wr32(self + 0x58u, t2 | 2u);
        wr32(self + 0x5cu, t1 | 2u);
        wr32(self + 0x70u, 0xc479c000u);
        wr32(self + 0x24u, t3);
        wr32(self + 0x28u, t4);
        wr8(self + 0x35u, 1u);
        g->ecx = t4;
        g->edx = t1 | 2u;
        g->esp = sp0 - 8u;
        t5 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            eax = t5;
            ecx = t6;
            edx = t7;
            ebx = (t2 & 0xffffff00u) | (t2 & 1u);
            goto L_10124a5c;
        }
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = (t2 & 0xffffff00u) | (t2 & 1u);
        if ((uint8_t)ebx != 0u) goto L_10124a86;
        ebx = (rd32(self + 0x58u) >> 2u & 0xffffff00u) | (rd32(self + 0x58u) >> 2u & 1u);
L_10124a5c: ;
        if ((uint8_t)ebx == 0u)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t8 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x90u);
            t9 = g->ecx;
            t10 = g->edx;
            if (t8 == 0u)
            {
                ecx = t9;
                t13 = rd32(self + 4u);
                t14 = rd32(self + 8u);
                wr32(self + 0x38u, t13);
                wr32(self + 0x3cu, t14);
                edx = t13;
            }
            else
            {
                eax = t8;
                edx = t10;
                g->edx = edx;
                g->esp = sp0 - 8u;
                cow_thiscall(g, COW_IMG(0x101262a0u), self, 0);
                t11 = g->ecx;
                t12 = g->edx;
                ecx = t11;
                edx = t12;
            }
        }
L_10124a86: ;
        g->esp = sp0 - 8u;
        t15 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
        if ((uint8_t)t15 != 0u)
        {
            if (rd8(self + 0x4du) != 5u)
            {
                wr32(COW_IMG(0x104e1d48u), 1u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10124a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
