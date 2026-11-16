/* f_0x1028f010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1028f010(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < 0)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 0x44u))
        {
            eax = arg2;
            edx = in_edx;
        }
        else
        {
            if ((int32_t)rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u) <= 0)
            {
                eax = rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u);
                edx = arg2 * 5u;
            }
            else
            {
                eax = rd32(arg2 * 0x2cu + rd32(arg1 + 0x48u) + 4u);
                ecx = rd32(arg1 + 0x48u);
                esi = arg2 * 0x2cu + rd32(arg1 + 0x48u);
                if ((int32_t)eax > 0)
                {
                    ebp = 0u;
                    edi = 0u;
L_1028f04f: ;
                    if (rd32(edi + rd32(esi + 0x28u) + 0xcu) == 0u)
                    {
                        ecx = rd32(edi + rd32(esi + 0x28u) + 0xcu);
                        edx = rd32(esi + 0x28u);
                    }
                    else
                    {
                        eax = edi + rd32(esi + 0x28u);
                        ecx = rd32(edi + rd32(esi + 0x28u) + 0xcu);
                        edx = rd32(esi + 0x28u);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        cow_cdecl(g, COW_IMG(0x10285760u), 1, eax);
                        t1 = g->ecx;
                        t2 = g->edx;
                        ecx = t1;
                        edx = t2;
                    }
                    if (rd32(edi + rd32(esi + 0x28u) + 0x14u) != 0u)
                    {
                        eax = rd32(edi + rd32(esi + 0x28u) + 0x14u);
                        g->esp = sp0 - 0x10u;
                        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103ba694u), 0x20eu);
                        t3 = rd32(esi + 0x28u);
                        wr32(edi + t3 + 0x14u, 0u);
                        ecx = t3;
                    }
                    if ((int32_t)(ebp + 1u) < (int32_t)rd32(esi + 4u))
                    {
                        ebp = ebp + 1u;
                        edi = edi + 0x90u;
                        goto L_1028f04f;
                    }
                }
                t4 = rd32(esi + 0x28u);
                g->ecx = ecx;
                g->edx = t4;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, t4, COW_IMG(0x103ba694u), 0x212u);
                t5 = g->ecx;
                t6 = g->edx;
                t7 = rd32(esi + 0x24u);
                g->edx = t6;
                g->esp = sp0 - 0x18u;
                t8 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t7, COW_IMG(0x103ba694u), 0x213u);
                t9 = g->edx;
                wr32(esi + 0x28u, 0u);
                wr32(esi + 0x24u, 0u);
                wr32(esi + 4u, 0u);
                eax = t8;
                edx = t9;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028f010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
