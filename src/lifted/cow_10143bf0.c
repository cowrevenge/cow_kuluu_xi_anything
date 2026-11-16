/* f_0x10143bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10143bf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = arg1;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, arg1);
    if ((uint16_t)t1 == 0u)
    {
        ecx = rd32(COW_IMG(0x10578280u));
        goto L_10143c73;
    }
    eax = t1;
    ecx = rd32(COW_IMG(0x10578280u));
    if (rd32(ecx + 0x38u) == 0u) goto L_10143c6b;
    esi = (in_esi & 0xffff0000u) | rd16(ecx + 0x20u);
    edi = rd32(ecx + 0x38u);
    if ((int16_t)esi <= 0) goto L_10143c39;
    esi = (uint32_t)(int16_t)esi;
    edx = 0u;
    ebx = (uint16_t)eax + 0x7400u;
    eax = edi + 0x48u;
L_10143c2d: ;
    if (rd32(eax) == ebx) goto L_10143c66;
    if ((int32_t)(edx + 1u) < (int32_t)esi)
    {
        eax = eax + 0x54u;
        edx = edx + 1u;
        goto L_10143c2d;
    }
L_10143c39: ;
    t2 = rd32(rd32(COW_IMG(0x10578288u)) + 0x1cu);
    g->edx = t2;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x101f7080u), rd32(COW_IMG(0x10578288u)), ecx, g->edx, 0, 2, t2, 0u);
    t3 = g->edx;
    t4 = rd32(rd32(COW_IMG(0x10578280u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578280u));
    t5 = rd32(COW_IMG(0x10578280u));
    t6 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t4, 0u);
    return (t6 & 0xffffff00u) | 1u;
L_10143c66: ;
    loc_14 = edx;
L_10143c7f: ;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x101f7080u), eax, ecx, g->edx, 0, 2, loc_14, 0u);
    t9 = rd32(rd32(COW_IMG(0x10578280u)) + 8u);
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t9, 0u);
    return (t10 & 0xffffff00u) | 1u;
L_10143c6b: ;
    return eax & 0xffffff00u;
L_10143c73: ;
    t7 = rd32(rd32(COW_IMG(0x10578288u)) + 0x1cu);
    eax = t7;
    edx = rd32(COW_IMG(0x10578288u));
    loc_14 = t7;
    goto L_10143c7f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10143bf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
