/* f_0x1007ed40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ed40(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        goto L_1007edaa;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007eda3;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 7u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int8_t)((uint8_t)t6 == 0u) < 0)
    {
        ecx = t7;
        edx = (t8 & 0xffffff00u) | (uint8_t)t6 == 0u;
        esi = (uint32_t)(int8_t)((uint8_t)t6 == 0u);
        goto L_1007ed7f;
    }
    eax = t6;
    ecx = t7;
    edx = (t8 & 0xffffff00u) | (uint8_t)t6 == 0u;
    esi = (uint32_t)(int8_t)((uint8_t)t6 == 0u);
L_1007ed6e: ;
    t9 = (eax & 0xffffff00u) | esi == 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101938f0u), 2, 7u, t9);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
L_1007ed7f: ;
    if (esi == 0u) goto L_1007edae;
    eax = esi;
    if (eax != 1u) goto L_1007edc5;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x137u);
    t12 = g->edx;
    g->edx = t12;
    return arg3;
L_1007eda3: ;
    esi = 1u;
    goto L_1007ed6e;
L_1007edaa: ;
    esi = 0u;
    goto L_1007ed6e;
L_1007edae: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x136u);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
L_1007edc5: ;
    if ((int32_t)esi >= 0)
    {
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xffffffffu);
        t13 = g->edx;
        edx = t13;
    }
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ed40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007ed40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
