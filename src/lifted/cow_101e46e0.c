/* f_0x101e46e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e46e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr8(sp0 - 4u, 0u);
    wr8(sp0 - 2u, 0u);
    wr8(sp0 - 3u, 0u);
    wr8(sp0 - 1u, 0u);
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_101e4767;
    }
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, sp0 - 3u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 0u);
    g->eax = sp0 - 3u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 4u, 4, 0u, sp0 - 4u, sp0 - 3u, 1u);
    t2 = g->ecx;
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, sp0 - 1u);
    wr32(sp0 - 0x28u, sp0 - 2u);
    wr32(sp0 - 0x2cu, 0u);
    g->eax = sp0 - 2u;
    g->edx = sp0 - 1u;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), t2, 4, 0u, sp0 - 2u, sp0 - 1u, 2u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t3;
        ecx = t4;
        goto L_101e4749;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if (rd8(sp0 - 4u) != rd8(arg1))
    {
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 4u);
        goto L_101e4749;
    }
    ecx = (ecx & 0xffffff00u) | rd8(sp0 - 4u);
    edx = (edx & 0xffffff00u) | rd8(arg1);
    if (rd8(sp0 - 3u) != rd8(arg1 + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + 1u);
        goto L_101e4749;
    }
    g->esi = rd32(sp0 - 8u);
    return (eax & 0xffffff00u) | 1u;
L_101e4749: ;
    if ((uint8_t)eax == 0u) goto L_101e4767;
    if (rd8(sp0 - 2u) != rd8(arg1))
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 2u);
        goto L_101e4767;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 2u);
    ecx = (ecx & 0xffffff00u) | rd8(arg1);
    if (rd8(sp0 - 1u) != rd8(arg1 + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
        goto L_101e4767;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    g->esi = rd32(sp0 - 8u);
    return (eax & 0xffffff00u) | 1u;
L_101e4767: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e46e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e46e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
