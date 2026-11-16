/* f_0x10186c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10186c60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x70u) != 0u)
    {
        eax = rd32(arg2 + 0x70u);
    }
    else
    {
        if ((int32_t)rd32(arg2 + 0x68u) <= 0)
        {
            eax = rd32(arg2 + 0x68u);
        }
        else
        {
            eax = rd32(arg2 + 0x68u);
            ecx = self;
            edx = in_edx;
            esi = 0u;
L_10186c7b: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x1acu);
            t2 = g->ecx;
            t3 = g->edx;
            if (t1 == 0u)
            {
                ecx = t2;
                edx = t3;
            }
            else
            {
                eax = t1;
                t4 = rd32(esi * 4u + rd32(arg2 + 0x6cu));
                g->edx = t4;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x101873a0u), eax, 2, arg1, t4);
                t5 = g->ecx;
                t6 = g->edx;
                ecx = t5;
                edx = t6;
            }
            if ((int32_t)(esi + 1u) < (int32_t)rd32(arg2 + 0x68u))
            {
                eax = rd32(arg2 + 0x68u);
                esi = esi + 1u;
                goto L_10186c7b;
            }
            eax = rd32(arg2 + 0x68u);
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10186c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10186c60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
