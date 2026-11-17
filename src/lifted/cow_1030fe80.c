/* f_0x1030fe80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1030fe80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 4u, 0x474e5089u);
    if ((int32_t)rd32(sp0 + 8u) >= 5)
    {
        ecx = rd32(sp0 + 8u);
        if (rd32(arg1) != 0x474e5089u)
        {
            wr32(sp0 - 0xcu, in_ebx);
            wr32(sp0 - 0x10u, in_ebp);
            wr32(sp0 - 0x14u, in_edi);
            eax = sp0 + 8u;
            ebx = sp0 + 8u;
            ebp = 4u;
            esi = sp0 - 4u;
L_1030feb7: ;
            t1 = rd8(arg1 + eax - sp0 - 8u);
            t2 = rd8(esi);
            wr8(eax, (uint8_t)(t1 - t2));
            if (ebp != 1u)
            {
                eax = eax + 1u;
                ebx = (ebx & 0xffffff00u) | (uint8_t)(t1 - t2);
                ebp = ebp - 1u;
                esi = esi + 1u;
                goto L_1030feb7;
            }
            wr32(arg1, 0x474e5089u);
            if ((int32_t)(uint32_t)((int32_t)(ecx - 4u) >> 1u) <= 0)
            {
                eax = ecx - 4u & 1u;
                ecx = (uint32_t)((int32_t)(ecx - 4u) >> 1u);
                edx = arg1 + 4u;
            }
            else
            {
                eax = ecx - 4u & 1u;
                ecx = (uint32_t)((int32_t)(ecx - 4u) >> 1u);
                edx = arg1 + 4u;
                esi = rd32(sp0 + 8u);
                edi = arg1 - (sp0 + 8u);
L_1030fede: ;
                t3 = rd16(sp0 + 0xau);
                wr16(edx, (uint16_t)(rd16(edx) ^ t3));
                wr32(sp0 + 8u, esi * 0x19660du);
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    edx = edx + 2u;
                    esi = esi * 0x19660du;
                    edi = (edi & 0xffff0000u) | t3;
                    goto L_1030fede;
                }
                ecx = ecx - 1u;
                edx = edx + 2u;
            }
            if (eax != 0u)
            {
                wr8(edx, rd8(edx) ^ rd8(sp0 + 0xau));
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030fe80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030fe80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
