/* f_0x102b0440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_102b0440(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 272u);

    eax = arg1;
    ecx = self;
L_102b0453: ;
    t1 = rd8(eax);
    wr8(eax + sp0 - arg1 - 0x100u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_102b0453;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, (uint32_t)(int8_t)arg2);
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    g->edx = sp0 - 0x100u - arg1;
    g->esp = sp0 - 0xf8u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), ecx, 5, sp0 - 0x100u, (uint32_t)(int8_t)arg2, in_esi, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_102b0482;
    }
    eax = t2;
    g->esi = rd32(sp0 - 0x104u);
    return eax & 0xffffff00u;
L_102b0482: ;
    wr32(sp0 - 0x108u, (uint32_t)(int8_t)arg2);
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    wr8(eax, 0u);
    g->esp = sp0 - 0xf8u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x102b05e0u), sp0 - 0x100u, 5, sp0 - 0x100u, (uint32_t)(int8_t)arg2, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    g->esi = rd32(sp0 - 0x104u);
    return (uint8_t)-(t4 != 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b0440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
