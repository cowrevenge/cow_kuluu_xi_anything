/* f_0x100fde80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100fde80(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            ecx = self;
            edx = in_edx;
            ebx = 0u;
L_100fde9d: ;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t1 = cow_cdecl(g, COW_IMG(0x100fddf0u), 3, arg2, ebx, 2u);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            g->esp = sp0 - 0x2cu;
            t4 = cow_cdecl(g, COW_IMG(0x100fddf0u), 3, arg2, ebx, 1u);
            t5 = g->edx;
            if (ebx != 0u)
            {
                eax = t4;
                edx = t5;
                esi = t1;
            }
            else
            {
                edx = t5;
                esi = t1;
                eax = 0u;
            }
            wr8(arg1 + ebx * 8u, (uint8_t)ebx);
            if (eax == 0u)
            {
                wr32(arg1 + ebx * 8u + 4u, 0u);
                ecx = 0u;
            }
            else
            {
                g->ecx = 0u;
                g->edx = edx;
                d6 = fr(g, (double)(int64_t)cow_i64(esi, 0u) / (double)(int32_t)eax);
                fpush(g, d6);
                g->esp = sp0 - 0x20u;
                t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t8 = g->ecx;
                t9 = g->edx;
                wr32(arg1 + ebx * 8u + 4u, t7);
                eax = t7;
                ecx = t8;
                edx = t9;
            }
            if ((int32_t)(ebx + 1u) < 12)
            {
                ebx = ebx + 1u;
                goto L_100fde9d;
            }
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t10 = cow_call_regs(g, COW_IMG(0x100fde50u), eax, g->ecx, g->edx, 1, 1, arg1);
            t11 = g->ecx;
            t12 = g->edx;
            if ((uint8_t)t10 == 0u)
            {
                eax = t10;
                ecx = t11;
                edx = t12;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x103156f3u), 4, arg1, 0xcu, 8u, COW_IMG(0x100fde10u));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fde80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100fde80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
