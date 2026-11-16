/* f_0x102095b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102095b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q6;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0x24u, rd32(self + 0x24u) - t1);
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
    t5 = g->edx;
    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) - (uint16_t)t4));
    if ((int16_t)rd16(self + 0x1eu) >= 0)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        q6 = (int64_t)cow_muls(0x88888889u, rd32(self + 0x24u));
        t7 = (uint32_t)((int32_t)(cow_qhi(q6) + rd32(self + 0x24u)) >> 5u);
        if ((int32_t)(t7 + (t7 >> 0x1fu)) >= 0)
        {
            ecx = rd32(self + 0x24u);
            edx = t7 + (t7 >> 0x1fu);
            if ((int32_t)edx >= 60)
            {
                wr16(self + 0x1eu, (uint16_t)((((int32_t)edx >= 180) - 1u & 0xfffffc7cu) + 0x708u));
                ecx = (((int32_t)edx >= 180) - 1u & 0xfffffc7cu) + 0x708u;
            }
            else
            {
                wr16(self + 0x1eu, 0x258u);
            }
        }
        else
        {
            ecx = rd32(self + 0x24u);
            wr16(self + 0x1eu, 0x8700u);
        }
        t8 = (uint32_t)(int8_t)rd8(self + 0x1cu);
        g->edx = t8;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100ec080u), 3, t8, COW_IMG(0x10209520u), self);
        t9 = g->edx;
        edx = t9;
    }
    if (rd32(self + 0x80u) != 0u)
    {
        eax = rd32(self + 0x80u);
    }
    else
    {
        eax = rd32(self + 0x80u);
        if (rd32(self + 0x84u) != 0u)
        {
            ecx = rd32(self + 0x84u);
            if ((int32_t)rd32(self + 0x28u) < 0)
            {
                eax = rd32(self + 0x28u);
            }
            else
            {
                eax = rd32(self + 0x28u);
                g->edx = edx;
                g->esp = sp0 - 4u;
                t10 = cow_thiscall(g, COW_IMG(0x101c8450u), ecx, 1, eax);
                t11 = g->edx;
                wr32(self + 0x80u, t10);
                eax = t10;
                edx = t11;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102095b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102095b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
