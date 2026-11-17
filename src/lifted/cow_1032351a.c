/* f_0x1032351a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1032351a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_divs(g, arg2, 0x20u);
    t2 = cow_mods(g, arg2, 0x20u);
    t3 = cow_divs(g, arg2, 0x20u);
    t4 = cow_mods(g, arg2, 0x20u);
    t5 = arg1 + t1 * 4u;
    t6 = 1u << (0x1fu - t4 & 0x1fu);
    g->eax = t6;
    g->ecx = 0x1fu - t4;
    g->edx = t4;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, rd32(t5), t6, t5, in_edi);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)(t1 - 1u) >= 0)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = t1 - 1u;
        edi = arg1 + esi * 4u;
L_10323553: ;
        if (eax == 0u) goto L_1032356c;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_cdecl(g, COW_IMG(0x10325e41u), 4, rd32(edi), 1u, edi, in_edi);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)(esi - 1u) >= 0)
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            esi = esi - 1u;
            edi = edi - 4u;
            goto L_10323553;
        }
    }
L_1032356c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032351a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032351a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
