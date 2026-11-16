/* f_0x1015ec50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015ec50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        loc_4 = t1;
        goto L_1015eca6;
    }
    edx = t2;
    loc_4 = t1;
L_1015ec69: ;
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->ecx = COW_IMG(0x10621838u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_stdcall(g, COW_IMG(0x1015ee00u), 1, sp0 - 4u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edx = t5;
        goto L_1015ec9e;
    }
    ecx = t4;
    edx = t5;
    esi = t3;
    if (rd32(esi + 4u) == 0u) goto L_1015ec9e;
    eax = rd32(esi + 4u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0x14u, eax + 0x46u);
    wr32(sp0 - 0x18u, arg1);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, eax + 0x46u, 0x10u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t7 = g->edx;
    if (t6 != 0u)
    {
        edx = t7;
        goto L_1015ec9e;
    }
    eax = t6;
    edx = t7;
    if (rd32(esi + 0x10u) != 0xeu) goto L_1015ecae;
L_1015ec9e: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1015ec69;
    eax = rd32(sp0 - 4u);
L_1015eca6: ;
    return eax & 0xffffff00u;
L_1015ecae: ;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ec50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ec50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
