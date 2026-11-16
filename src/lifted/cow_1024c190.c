/* f_0x1024c190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1024c190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106690c4u)) == rd32(COW_IMG(0x106690f0u)))
    {
        esi = rd32(COW_IMG(0x106690f0u));
    }
    else
    {
        esi = rd32(COW_IMG(0x106690f0u));
        edi = rd32(COW_IMG(0x106690c4u));
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = in_edx;
L_1024c1a8: ;
        if ((int32_t)rd32(esi) < 14)
        {
            eax = rd32(esi);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, rd32(COW_IMG(0x10388c18u) + eax * 4u), esi + 4u, 1, esi + 4u);
            t1 = g->edx;
            ecx = rd32(COW_IMG(0x106690e8u));
            edx = t1;
        }
        if (rd32(esi) == 7u)
        {
            if (esi + 0x120u < ecx + 0x2000u)
            {
                esi = esi + 0x120u;
            }
            else
            {
                esi = esi + 0x120u;
                esi = esi - 0x2000u;
            }
        }
        else
        {
            if (esi + 0x20u < ecx + 0x2000u)
            {
                edx = ecx + 0x2000u;
                esi = esi + 0x20u;
            }
            else
            {
                edx = ecx + 0x2000u;
                esi = ecx;
            }
        }
        if (edi != esi) goto L_1024c1a8;
    }
    wr32(COW_IMG(0x106690f0u), esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024c190(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
