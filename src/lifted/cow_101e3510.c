/* f_0x101e3510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e3510(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101e34d0u), self, 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101e35a7;
    }
    esi = t1;
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, sp0 - 5u);
    wr32(sp0 - 0x18u, sp0 - 6u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 5u;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 6u, 4, sp0 - 4u, sp0 - 6u, sp0 - 5u, 1u);
    t3 = g->ecx;
    if ((uint8_t)t2 == 0u) goto L_101e3565;
    eax = t2;
    ecx = t3;
    if (rd8(sp0 - 6u) != rd8(esi)) goto L_101e3565;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 6u);
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    if (rd8(sp0 - 5u) != rd8(esi + 1u)) goto L_101e3565;
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    t4 = rd32(sp0 - 0xcu);
    wr8(arg1, 1u);
    g->esi = t4;
    return (eax & 0xffffff00u) | 1u;
L_101e3565: ;
    wr32(sp0 - 0x10u, 2u);
    wr32(sp0 - 0x14u, sp0 - 5u);
    wr32(sp0 - 0x18u, sp0 - 6u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->eax = sp0 - 5u;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 6u, 4, sp0 - 4u, sp0 - 6u, sp0 - 5u, 2u);
    t6 = g->ecx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_101e35a7;
    }
    eax = t5;
    ecx = t6;
    if (rd8(sp0 - 6u) != rd8(esi))
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 6u);
        goto L_101e35a7;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 6u);
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    if (rd8(sp0 - 5u) != rd8(esi + 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        goto L_101e35a7;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    t7 = rd32(sp0 - 0xcu);
    wr8(arg1, 2u);
    g->esi = t7;
    return (eax & 0xffffff00u) | 1u;
L_101e35a7: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
