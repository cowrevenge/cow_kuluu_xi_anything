/* f_0x102a9650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102a9650(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(rd32(sp0 + 8u) + 0x14u) != 0u)
    {
        eax = rd32(sp0 + 8u);
        t1 = rd32(sp0 + 4u);
        wr32(t1, rd32(eax));
        t2 = rd32(eax + 0x14u);
        wr32(t1 + 0x14u, t2);
        wr32(sp0 + 8u, eax + 0x54u);
        wr32(sp0 + 4u, eax - t1);
        ecx = eax + 0x54u;
        eax = eax - t1;
        edx = t2;
        ebp = t1 + 0x18u;
        esi = 0u;
        edi = t1;
L_102a9685: ;
        if (rd32(eax + ebp) != 0u)
        {
            ebx = rd32(eax + ebp);
            if (rd32(ebp) != ebx)
            {
                g->ecx = ecx;
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x102a9a10u), 6, edi, esi, in_edi, in_esi, in_ebp, in_ebx);
                t4 = g->ecx;
                ecx = t4;
            }
            t5 = rd32(rd32(sp0 + 8u));
            g->edx = rd32(sp0 + 8u);
            t6 = rd32(sp0 + 8u);
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102a9910u), 4, edi, esi, t5, ebx);
            t7 = g->edx;
            edx = t7;
        }
        else
        {
            g->edx = edx;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x102a9a10u), 6, edi, esi, in_edi, in_esi, in_ebp, in_ebx);
            t3 = g->edx;
            edx = t3;
        }
        t8 = rd32(sp0 + 8u) + 4u;
        wr32(sp0 + 8u, t8);
        if ((int32_t)(esi + 1u) < 12)
        {
            ecx = t8;
            ebp = ebp + 4u;
            esi = esi + 1u;
            goto L_102a9681;
        }
    }
    return;
L_102a9681: ;
    eax = rd32(sp0 + 4u);
    goto L_102a9685;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a9650(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
