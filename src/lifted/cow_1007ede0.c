/* f_0x1007ede0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ede0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_1007edf4;
    }
    edx = t2;
    g->edx = edx;
    return -arg3;
L_1007edf4: ;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 1u)
    {
        eax = t5 - 1u;
        ecx = t6;
        edx = t7;
        goto L_1007ee71;
    }
    eax = t5 - 1u;
    ecx = t6;
    edx = t7;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007ee6d;
    }
    eax = eax - 1u;
    t8 = ~(uint8_t)(rd32(esi + 0x13cu) >> 7u) & 1u;
    if ((int32_t)t8 < 0)
    {
        edx = t8;
        goto L_1007ee89;
    }
    edx = t8;
    esi = t8;
L_1007ee1f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 8u);
    t10 = g->ecx;
    t11 = g->edx;
    if (esi == ((uint8_t)t9 == 0u))
    {
        edx = t11;
        goto L_1007ee89;
    }
    eax = (uint8_t)t9 == 0u;
    ecx = t10;
    edx = t11;
    t12 = (ecx & 0xffffff00u) | esi != 1u;
    g->ecx = t12;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101938f0u), 2, 8u, t12);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100fd6b0u), 1, esi);
    t15 = g->edx;
    if (esi == 0u)
    {
        edx = t15;
        goto L_1007ee78;
    }
    edx = t15;
    if (esi != 1u) goto L_1007ee89;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x143u);
    t16 = g->edx;
    g->edx = t16;
    return arg3;
L_1007ee6d: ;
    esi = 0u;
    goto L_1007ee1f;
L_1007ee71: ;
    esi = 1u;
    goto L_1007ee1f;
L_1007ee78: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x144u);
    t17 = g->edx;
    edx = t17;
L_1007ee89: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ede0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007ede0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
