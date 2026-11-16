/* f_0x1015ed10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1015ed10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        loc_4 = t1;
        goto L_1015ed6a;
    }
    edx = t2;
    loc_4 = t1;
L_1015ed32: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->ecx = COW_IMG(0x10621838u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x1015ee00u), 1, sp0 - 4u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edx = t5;
        goto L_1015ed62;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if ((uint16_t)(((ecx & 0xffff0000u) | rd16(eax + 0x38u)) & arg1) == 0u) goto L_1015ed62;
    if ((uint8_t)arg3 != 0u) goto L_1015ed5a;
    if (rd32(eax + 0x10u) == 0xeu) goto L_1015ed62;
L_1015ed5a: ;
    if (arg2 == 0u) goto L_1015ed73;
    if (eax != arg2) goto L_1015ed73;
L_1015ed62: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1015ed32;
    eax = rd32(sp0 - 4u);
L_1015ed6a: ;
    return eax & 0xffffff00u;
L_1015ed73: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ed10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ed10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
