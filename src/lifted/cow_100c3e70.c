/* f_0x100c3e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c3e70(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10085240u), 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_100c3ebd;
    eax = t1;
    edx = t2;
L_100c3e7e: ;
    if (eax == arg1) goto L_100c3e8f;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10085270u), eax, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100c3e7e;
    }
    return;
L_100c3e8f: ;
    if (rd32(arg1 + 0x70u) != 0u)
    {
        esi = rd32(arg1 + 0x70u);
        g->edx = edx;
        t5 = rd16(esi + 0x74u);
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x1008a7b0u), eax, esi, g->edx, 1, 0);
        t7 = g->ecx;
        t8 = g->edx;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x10480af0u) + (uint16_t)t5 * 4u, 0u);
    }
L_100c3ebd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c3e70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
