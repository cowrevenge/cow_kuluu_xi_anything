/* f_0x102a64a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_102a64a0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x1cu, arg1);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1036bf68u));
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_102a64c3;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_102a64c3: ;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x102a6260u), 3, sp0 - 0x10u, esi, in_ebx);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x10311f70u), 3, esi, sp0 - 0x10u, rd32(sp0 - 0x1cu));
    return (t6 & 0xffffff00u) | (uint8_t)t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a64a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a64a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
