/* f_0x101d3cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101d3cc0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(sp0 + 0xcu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_101d3cff;
    }
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x267u);
    t2 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d3bd0u), 0u, t1, 0u, 0u, 1u, 0u);
    return;
L_101d3cff: ;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        goto L_101d3d7c;
    }
    wr32(sp0 + 0xcu, 2u);
    ecx = self;
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    edi = self + 0x4cu;
L_101d3d14: ;
    esi = 0u;
L_101d3d16: ;
    if (rd32(edi) != 0u)
    {
        eax = rd32(edi);
        t3 = rd32(eax + 0x10u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t3, esi);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            ecx = t5;
            edx = t6;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            if (rd8(eax + 0x10u) == 0u)
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 0x10u);
            }
            else
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 0x10u);
                ebx = (ebx & 0xffffff00u) | 1u;
            }
        }
    }
    if ((int32_t)(esi + 1u) < 81)
    {
        esi = esi + 1u;
        edi = edi + 4u;
        goto L_101d3d16;
    }
    edi = edi + 4u;
    t7 = rd32(sp0 + 0xcu) - 1u;
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t7);
    if (t8 != 1u) goto L_101d3d14;
    eax = t7;
    if ((uint8_t)ebx == 0u) goto L_101d3d7c;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x35u);
    t10 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210f10u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101d3bb0u), 0u, t9, 0u, 0u, 1u, 0u);
    return;
L_101d3d7c: ;
    esi = 0u;
L_101d3d82: ;
    g->ebx = ebx;
    g->ebp = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x101d3c40u), self, 4, esi, 1u, arg1, 0u);
    t12 = g->edx;
    g->ebx = ebx;
    g->ebp = self;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101d3c40u), self, 4, esi, 9u, arg1, 0u);
    t14 = g->edx;
    if ((int32_t)(esi + 1u) < 81)
    {
        eax = t13;
        edx = t14;
        esi = esi + 1u;
        goto L_101d3d82;
    }
    eax = t13;
    edx = t14;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x101cecf0u), rd32(self + 0x14u), edx, 0);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
