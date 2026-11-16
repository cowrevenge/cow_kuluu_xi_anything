/* f_0x10133d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10133d70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edi = g->edi;

    t1 = (in_eax & 0xffffff00u) | rd8(self + 0x14fu);
    t2 = rd32(self + 0x150u);
    g->ecx = t2;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t2, t1);
    t4 = g->ecx;
    if (t3 == 0u) goto L_10133e4a;
    ecx = t4;
    ebx = t3;
    loc_4 = t3;
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 1)
    {
        edx = rd32(self + 8u);
        ebp = 0u;
        goto L_10133df1;
    }
    edx = rd32(self + 8u);
    ebp = 0u;
    edi = 1u;
    loc_8 = 1u;
L_10133db1: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_stdcall(g, COW_IMG(0x10131680u), 1, edi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int16_t)t5 < 0)
    {
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t8 = cow_cdecl(g, COW_IMG(0x100fe910u), 2, ebx + 0x10u, (uint32_t)(int16_t)eax);
        t9 = g->edx;
        wr8(self + (uint32_t)(int16_t)eax + 0x22u, (uint8_t)t8);
        edx = t9;
        ebx = loc_4;
        ebp = ebp + (uint8_t)t8;
        edi = loc_8;
    }
    if ((int32_t)(edi + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
    {
        loc_8 = edi + 1u;
        edi = edi + 1u;
        goto L_10133db1;
    }
    ecx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
L_10133df1: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t10 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t11 = g->edx;
    if (ebp == 0u)
    {
        eax = t10;
        ecx = rd32(self + 8u);
        edx = t11;
        edi = rd32(rd32(eax) + 0x888u);
        eax = rd32(eax);
        loc_20 = 5u;
    }
    else
    {
        eax = t10;
        ecx = rd32(self + 8u);
        edx = rd32(eax);
        edi = rd32(rd32(eax) + 0x884u);
        loc_20 = 0xbu;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t12 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_20, 0x11u);
    t13 = g->edx;
    g->edi = edi;
    cow_thiscall(g, COW_IMG(0x1011ae50u), rd32(self + 8u), 2, 0x11u, edi);
    if (rd32(self + 0x1cu) != 2u) goto L_10133e43;
    wr8(rd32(self + 8u) + 0x61u, 1u);
    g->edi = in_edi;
    return;
L_10133e43: ;
    wr8(rd32(self + 8u) + 0x61u, 0u);
L_10133e4a: ;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10133d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
