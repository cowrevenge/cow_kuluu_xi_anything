/* f_0x102e73c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102e73c5(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x10346420u));
    wr32(sp0 - 0x18u, 0x80000002u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329008u)), 5, 0x80000002u, COW_IMG(0x10346420u), sp0 - 8u, self, 0u);   /* advapi32.dll!RegOpenKeyA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u) goto L_102e741d;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, sp0 + 0x10u);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, in_esi);
    g->eax = sp0 - 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, in_esi, arg2, 0u, sp0 - 0xcu, arg3, sp0 + 0x10u);   /* advapi32.dll!RegQueryValueExA */
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xcu, in_esi);
    cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, in_esi);   /* advapi32.dll!RegCloseKey */
    if (t4 != 0u) goto L_102e741d;
    if (rd32(sp0 - 0xcu) != arg1) goto L_102e741d;
    g->ebp = rd32(sp0 - 4u);
    return 1u;
L_102e741d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e73c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e73c5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
