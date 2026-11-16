/* f_0x101ec660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ec660(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    if (rd16(arg3 + 4u) != 0u)
    {
        esi = (in_esi & 0xffff0000u) | rd16(arg3 + 4u);
        goto L_101ec6bb;
    }
    if (rd8(arg3 + 7u) == 0xfbu)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        ebx = (arg3 & 0xffffff00u) | rd8(arg3 + 7u);
        goto L_101ec6a9;
    }
    ecx = rd32(COW_IMG(0x10578158u));
    ebx = (arg3 & 0xffffff00u) | rd8(arg3 + 7u);
    if ((uint8_t)ebx == 0xfdu) goto L_101ec697;
    wr32(sp0 - 0x60u, 0x9bu);
    g->ebx = ebx;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), ecx, 1, 0x9bu);
    t2 = g->edx;
    g->ebx = in_ebx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_101ec697: ;
    wr32(sp0 - 0x60u, 0x9au);
    g->ebx = ebx;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), ecx, 1, 0x9au);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_101ec6a9: ;
    wr32(sp0 - 0x60u, 0xa3u);
    g->ebx = ebx;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t5 = cow_thiscall(g, COW_IMG(0x10129e30u), ecx, 1, 0xa3u);
    t6 = g->edx;
    g->ebx = in_ebx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101ec6bb: ;
    if (rd8(arg3 + 7u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 7u);
        goto L_101ec6da;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg3 + 7u);
    wr32(sp0 - 0x60u, 0x81u);
    g->ebx = arg3;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t7 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x81u);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101ec6da: ;
    if ((int8_t)eax >= 0)
    {
        edx = (uint32_t)(int8_t)eax;
    }
    else
    {
        edx = (uint32_t)(int8_t)eax;
        edx = -edx;
    }
    wr32(sp0 - 0x60u, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)edx <= 1)
    {
        wr16(sp0 - 0x4cu, 0xa6u);
    }
    else
    {
        wr16(sp0 - 0x4cu, 0xa5u);
        wr32(sp0 - 0x44u, edx);
    }
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    wr32(sp0 - 0x48u, (uint16_t)esi);
    g->ebx = arg3;
    g->eax = sp0 - 0x54u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t9 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t10 = g->edx;
    if ((int8_t)rd8(arg3 + 7u) >= 0)
    {
        eax = (t9 & 0xffffff00u) | rd8(arg3 + 7u);
        edx = t10;
    }
    else
    {
        eax = (t9 & 0xffffff00u) | rd8(arg3 + 7u);
        edx = t10;
        wr32(sp0 - 0x60u, 0x83u);
        g->ebx = arg3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t11 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x83u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
