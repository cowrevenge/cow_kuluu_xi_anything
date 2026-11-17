/* f_0x100180d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100180d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10350988u)) == 0x270fu)
    {
        eax = rd32(COW_IMG(0x10350988u));
        ecx = self;
        goto L_100180fb;
    }
    eax = rd32(COW_IMG(0x10350988u));
    ecx = COW_IMG(0x10350988u);
    esi = 0u;
L_100180e9: ;
    if (eax == arg1) goto L_10018107;
    if (rd32(ecx + 0x10u) != 0x270fu)
    {
        eax = rd32(ecx + 0x10u);
        ecx = ecx + 0x10u;
        esi = esi + 1u;
        goto L_100180e9;
    }
    eax = rd32(ecx + 0x10u);
    ecx = ecx + 0x10u;
L_100180fb: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10018140u), 1, arg1);
    t4 = g->edx;
    g->edx = t4;
    return;
L_10018107: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10017d90u), ecx, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        eax = COW_IMG(0x103d3c84u);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, rd32(COW_IMG(0x1035097cu) + rd32(COW_IMG(0x1035098cu) + esi * 0x10u) * 4u), rd32(COW_IMG(0x1035098cu) + esi * 0x10u), 2, arg1, eax);
    t3 = g->edx;
    g->edx = t3;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100180d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100180d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
