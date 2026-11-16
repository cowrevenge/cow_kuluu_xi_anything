/* f_0x101e3a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101e3a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 - 5u);
    wr32(sp0 - 0x1cu, sp0 - 6u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = sp0 - 5u;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 6u, 4, sp0 - 4u, sp0 - 6u, sp0 - 5u, 1u);
    t2 = g->ecx;
    if ((uint8_t)t1 == 0u) goto L_101e3a6c;
    eax = t1;
    ecx = t2;
    if ((uint8_t)arg1 != rd8(sp0 - 6u)) goto L_101e3a5c;
    if ((uint8_t)arg2 == rd8(sp0 - 5u)) goto L_101e3a6c;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
L_101e3a5c: ;
    if (arg3 != rd32(rd32(sp0 - 4u))) goto L_101e3a6c;
    return (eax & 0xffffff00u) | 1u;
L_101e3a6c: ;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 - 5u);
    wr32(sp0 - 0x1cu, sp0 - 6u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = sp0 - 6u;
    g->edx = sp0 - 5u;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 4u, 4, sp0 - 4u, sp0 - 6u, sp0 - 5u, 2u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_101e3aab;
    }
    eax = t3;
    edx = t4;
    if ((uint8_t)arg1 != rd8(sp0 - 6u)) goto L_101e3a9b;
    if ((uint8_t)arg2 == rd8(sp0 - 5u))
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 5u);
        goto L_101e3aab;
    }
L_101e3a9b: ;
    if (arg3 != rd32(rd32(sp0 - 4u)))
    {
        eax = rd32(sp0 - 4u);
        goto L_101e3aab;
    }
    eax = rd32(sp0 - 4u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return (eax & 0xffffff00u) | 1u;
L_101e3aab: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
