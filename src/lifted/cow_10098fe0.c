/* f_0x10098fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10098fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_1009902f;
    if (arg1 == 1u) goto L_10098ffd;
    if (arg1 == 2u) goto L_10098ff2;
    return arg1 - 2u & 0xffffff00u;
L_10098ff2: ;
    loc_c = 0x10eu;
L_10099038: ;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, loc_c, 0u, 0u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        wr32(eax + 4u, (uint16_t)arg2);
        g->eax = eax;
        g->esp = sp0;
        t6 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
        eax = t6;
    }
L_1009905e: ;
    return (eax & 0xffffff00u) | 1u;
L_10098ffd: ;
    g->ecx = self;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x10cu, 0u, 0u);
    t2 = g->ecx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1009905e;
    }
    eax = t1;
    ecx = t2;
    wr32(eax + 4u, (uint16_t)arg2);
    g->eax = eax;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
    return (t3 & 0xffffff00u) | 1u;
L_1009902f: ;
    loc_c = 0x10du;
    goto L_10099038;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
