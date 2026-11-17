/* f_0x10322bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10322bb0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    eax = 0u;
    edx = arg2;
    loc_28 = 0u;
L_10322bc4: ;
    if (rd8(edx) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_10322bd1;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    cf = 0u;
    { /* bts dword ptr [esp], eax */ uint32_t A = sp0 - 0x28u; { int32_t o = (int32_t)(int32_t)eax; uint32_t B = A + (uint32_t)(o >> 3); unsigned n = (unsigned)o & 7u; uint8_t v = rd8(B); cf = (v >> n) & 1u; wr8(B, (uint8_t)(v | (1u << n))); } }
    edx = edx + 1u;
    loc_28 = rd32(sp0 - 0x28u);
    goto L_10322bc4;
L_10322bd1: ;
    ecx = 0xffffffffu;
    esi = arg1;
L_10322bd8: ;
    if (rd8(esi) == 0u)
    {
        ecx = ecx + 1u;
        goto L_10322be6;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    ecx = ecx + 1u;
    cf = 0u;
    { /* bt dword ptr [esp], eax */ uint32_t A = sp0 - 0x28u; { int32_t o = (int32_t)(int32_t)eax; uint32_t B = A + (uint32_t)(o >> 3); unsigned n = (unsigned)o & 7u; uint8_t v = rd8(B); cf = (v >> n) & 1u; } }
    if (!cf)
    {
        esi = esi + 1u;
        goto L_10322bd8;
    }
L_10322be6: ;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10322bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10322bb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
