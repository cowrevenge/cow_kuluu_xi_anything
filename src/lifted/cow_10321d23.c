/* f_0x10321d23 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10321d23(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x109b2714u)) == 1u)
    {
        eax = rd32(COW_IMG(0x109b2714u));
        goto L_10321d3a;
    }
    eax = rd32(COW_IMG(0x109b2714u));
    if (eax != 0u) goto L_10321d5b;
    if (rd32(COW_IMG(0x109b2718u)) != 1u) goto L_10321d5b;
L_10321d3a: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10321d5cu), 1, 0xfcu);
    t1 = g->edx;
    if (rd32(COW_IMG(0x109b29d8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109b29d8u));
        ecx = 0xfcu;
        edx = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x109b29d8u));
        edx = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t2 = cow_thiscall(g, eax, 0xfcu, 0);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10321d5cu), 1, 0xffu);
L_10321d5b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10321d23(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10321d23(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
