/* f_0x10289500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10289500(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg1 + 0x58u) > 0)
    {
        edi = 0u;
L_10289511: ;
        if ((rd8(edi * 4u + rd32(arg1 + 0x54u)) & 0x20u) == 0u)
        {
            t1 = rd32(edi * 4u + rd32(arg1 + 0x50u));
            if (t1 >> 0x10u == arg3)
            {
                ecx = rd32(arg1 + 0x50u);
                ebp = (uint16_t)t1;
                esi = t1 >> 0x10u;
                g->eax = arg3;
                g->ecx = ecx;
                g->edx = arg2;
                g->esp = sp0 - 4u;
                t2 = cow_cdecl(g, COW_IMG(0x1027c9a0u), 5, arg2, ebp, in_esi, in_ebp, in_edi);
                t3 = g->ecx;
                t4 = g->edx;
                if (t2 == 0u)
                {
                    eax = t2;
                    ecx = t3;
                    edx = t4;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9444u), esi);
                    wr32(edi * 4u + rd32(arg1 + 0x50u), 0u);
                }
                else
                {
                    eax = t2;
                    wr32(edi * 4u + rd32(arg1 + 0x50u), eax + 0x24u);
                }
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
        {
            edi = edi + 1u;
            goto L_10289511;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10289500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
