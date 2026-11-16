/* f_0x1027a270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1027a270(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if ((int32_t)(rd32(rd32(sp0 + 4u) + 0x68u) - 1u) < 0)
    {
        edi = rd32(sp0 + 4u);
        goto L_1027a2b3;
    }
    esi = rd32(rd32(sp0 + 4u) + 0x68u) - 1u;
    edi = rd32(sp0 + 4u);
L_1027a27c: ;
    if (rd32(esi * 4u + rd32(edi + 0x64u)) >> 8u & 1u)
    {
        t1 = rd32(esi * 4u + rd32(edi + 0x60u));
        t2 = rd32(edi + 0x60u);
        wr32(sp0 + 4u, t1);
        if (rd32(t1) != 0x70004u)
        {
            eax = t1;
            ecx = t2;
            wr32(sp0 - 0xcu, sp0 + 4u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 + 4u);
            wr32(esi * 4u + rd32(edi + 0x60u), 0u);
        }
    }
    if ((int32_t)(esi - 1u) >= 0)
    {
        esi = esi - 1u;
        goto L_1027a27c;
    }
L_1027a2b3: ;
    if ((int32_t)(rd32(edi + 0x68u) - 1u) < 0) goto L_1027a307;
    esi = rd32(edi + 0x68u) - 1u;
L_1027a2b9: ;
    if (rd32(esi * 4u + rd32(edi + 0x60u)) != 0u)
    {
        eax = rd32(esi * 4u + rd32(edi + 0x60u));
        if (rd32(esi * 4u + rd32(edi + 0x64u)) >> 8u & 1u)
        {
            ecx = rd32(esi * 4u + rd32(edi + 0x64u));
            edx = rd32(edi + 0x64u);
            if (rd32(eax) == 0x70004u)
            {
                wr32(sp0 + 4u, eax);
                if ((rd8(eax + 0x20u) & 8u) == 0u)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x20u);
                    wr32(sp0 - 0xcu, sp0 + 4u);
                    g->esp = sp0 - 8u;
                    cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 + 4u);
                }
                else
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x20u);
                    wr32(sp0 - 0xcu, 0x848u);
                    wr32(sp0 - 0x10u, COW_IMG(0x103b37ecu));
                    wr32(sp0 - 0x14u, eax);
                    g->esp = sp0 - 8u;
                    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x848u);
                }
            }
        }
    }
    if ((int32_t)(esi - 1u) >= 0)
    {
        esi = esi - 1u;
        goto L_1027a2b9;
    }
L_1027a307: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027a270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027a270(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
