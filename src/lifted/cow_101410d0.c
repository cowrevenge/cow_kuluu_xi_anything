/* f_0x101410d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101410d0(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1014118d;
    }
    eax = rd32(self + 8u);
    if ((int32_t)rd32(sp0 + 4u) < 0) goto L_1014118d;
    ebx = rd32(sp0 + 4u);
    if ((int32_t)ebx > 3) goto L_1014118d;
    wr32(sp0 + 4u, self + 0x1cu);
    eax = self + 0x1cu;
    ecx = self;
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_10141106: ;
    if (rd8(COW_IMG(0x103701a8u) + ebx * 8u + esi) == 0xffu) goto L_1014115e;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x103701a8u) + ebx * 8u + esi);
    if ((uint8_t)eax != 7u) goto L_10141128;
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10578214u));
    g->edx = edx;
    t1 = rd32(COW_IMG(0x10578214u));
    g->esp = sp0 - 0x14u;
    t2 = cow_stdcall(g, COW_IMG(0x1013eff0u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10141158;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
L_10141128: ;
    t5 = ((ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(COW_IMG(0x103701a8u) + ebx * 8u + esi)) + 1u;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x10118ad0u), rd32(self + 8u), 1, t5);
    t7 = rd32(sp0 + 4u);
    wr32(t7, t6);
    t8 = (uint32_t)(int8_t)rd8(COW_IMG(0x103701a8u) + ebx * 8u + esi);
    wr32(COW_IMG(0x103701c4u) + edi * 4u + 4u, t8);
    wr32(sp0 + 4u, t7 + 4u);
    eax = t6;
    ecx = t7 + 4u;
    edx = t8;
    edi = edi + 1u;
L_10141158: ;
    if ((int32_t)(esi + 1u) < 8)
    {
        esi = esi + 1u;
        goto L_10141106;
    }
L_1014115e: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        wr16(eax + 0x58u, (uint16_t)edi);
        t9 = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_call_regs(g, COW_IMG(0x10118db0u), t9, rd32(self + 8u), g->edx, 0, 2, t9, 0u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    if (edi == 0u) goto L_1014118d;
    g->ebp = self;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10141030u), self, 1, edi - 1u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t12;
L_1014118d: ;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101410d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101410d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
