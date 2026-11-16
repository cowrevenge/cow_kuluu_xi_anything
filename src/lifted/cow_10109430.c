/* f_0x10109430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10109430(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = self;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 8u, 0);
    t1 = g->edx;
    if (rd32(t1 + 4u) == 0u)
    {
        edx = t1;
    }
    else
    {
        eax = rd32(t1 + 4u);
        edx = t1;
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
            if ((uint16_t)arg3 != 0u)
            {
                if ((uint16_t)arg2 == 0u)
                {
                    eax = 0u;
                    edx = (edx & 0xffff0000u) | (uint16_t)arg2;
                    goto L_1010946f;
                }
                eax = 0u;
                edx = (edx & 0xffff0000u) | (uint16_t)arg2;
L_10109463: ;
                if (rd8(ecx) == 0u) goto L_1010946f;
                if ((uint16_t)(eax + 1u) < (uint16_t)edx)
                {
                    eax = eax + 1u;
                    ecx = ecx + 1u;
                    goto L_10109463;
                }
                eax = eax + 1u;
                ecx = ecx + 1u;
L_1010946f: ;
                if ((int16_t)arg3 <= 0)
                {
                    wr32(sp0 - 0x10u, ecx);
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_call_regs(g, COW_IMG(0x101092c0u), eax, sp0 - 8u, g->edx, 0, 1, ecx);
                    t3 = g->edx;
                    edx = t3;
                }
                else
                {
                    if ((int16_t)arg3 <= 0)
                    {
                        eax = 0u;
                        goto L_1010948a;
                    }
                    eax = 0u;
L_1010947b: ;
                    if (rd8(ecx + (uint32_t)(int16_t)eax) == 0u)
                    {
                        edx = (uint32_t)(int16_t)eax;
                        goto L_1010948a;
                    }
                    edx = (uint32_t)(int16_t)eax;
                    if ((int16_t)(eax + 1u) < (int16_t)arg3)
                    {
                        eax = eax + 1u;
                        goto L_1010947b;
                    }
                    eax = eax + 1u;
L_1010948a: ;
                    wr32(sp0 - 0x10u, eax);
                    wr32(sp0 - 0x14u, ecx);
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, COW_IMG(0x10109340u), sp0 - 8u, 2, ecx, eax);
                    t2 = g->edx;
                    edx = t2;
                }
            }
        }
    }
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x101091b0u), arg1, 1, sp0 - 8u);
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109430(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
