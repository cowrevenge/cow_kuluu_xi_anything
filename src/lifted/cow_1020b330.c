/* f_0x1020b330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020b330(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
    }
    else
    {
        if ((int32_t)(arg2 - 1u) < 0)
        {
            eax = arg2;
        }
        else
        {
            edx = arg1;
            esi = arg1 + arg2 * 0x54u - 0xcu;
            edi = arg2;
L_1020b358: ;
            if (rd32(esi) == 0u)
            {
                eax = rd32(esi);
            }
            else
            {
                eax = rd32(esi);
                if (rd32(eax) != 1u)
                {
                    ecx = rd32(eax);
                    goto L_1020b375;
                }
                if (rd32(COW_IMG(0x106644e4u)) == 0u) goto L_1020b38f;
                ecx = rd32(COW_IMG(0x106644e4u));
                t1 = rd32(ecx + 0xcu);
                ecx = t1;
                loc_c = t1;
L_1020b37e: ;
                g->edx = edx;
                g->esp = sp0;
                t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, eax + 4u, COW_IMG(0x10385a20u), loc_c, in_edi, in_esi);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
L_1020b38f: ;
            if (edi != 1u)
            {
                esi = esi - 0x54u;
                edi = edi - 1u;
                goto L_1020b358;
            }
        }
    }
    return eax;
L_1020b375: ;
    if (ecx != 2u) goto L_1020b38f;
    t2 = rd32(eax + 0x48u);
    edx = t2;
    loc_c = t2;
    goto L_1020b37e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020b330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020b330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
