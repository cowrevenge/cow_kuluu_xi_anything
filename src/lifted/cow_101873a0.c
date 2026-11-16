/* f_0x101873a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101873a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(self, COW_IMG(0x103367b8u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10187050u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 8u, arg2);
    if (arg2 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101873df;
    }
    edx = t3;
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 + 8u, arg1, g->edx, 0, 3, sp0 + 8u, 1u, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(t4) == 0u)
    {
        eax = rd32(t4);
        ecx = t5;
        edx = t6;
        goto L_101873df;
    }
    eax = rd32(t4);
    ecx = t5;
    edx = t6;
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_101873df;
    }
    eax = rd32(eax);
    wr32(self + 0x14u, eax);
L_101873e2: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x10188900u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        edx = t9;
        goto L_10187427;
    }
    ecx = t8;
    edx = t9;
    esi = t7;
L_101873ed: ;
    if (rd32(esi + 4u) == self) goto L_101873fc;
    eax = rd32(esi + 4u);
    if (eax != 0u)
    {
        esi = eax;
        goto L_101873ed;
    }
L_10187427: ;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        wr32(sp0 - 0x10u, COW_IMG(0x1065ca58u));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101880c0u), self, 1, COW_IMG(0x1065ca58u));
    }
    if (arg2 == 0x6c627573u)
    {
        wr32(rd32(COW_IMG(0x1065cb04u)) + 0x1c4u, self);
    }
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return self;
L_101873df: ;
    wr32(self + 0x14u, arg1);
    loc_4 = in_ebx;
    loc_8 = in_esi;
    loc_c = in_edi;
    goto L_101873e2;
L_101873fc: ;
    if (rd32(esi + 0x10u) != 0u)
    {
        eax = rd32(esi + 0x10u);
        wr32(sp0 - 0x10u, ecx);
        wr32(sp0 - 0x14u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x10u, 1, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x14u, t11);
        wr32(sp0 - 0x18u, 0u);
        g->edx = t12;
        g->esp = sp0 - 0x14u;
        t13 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x14u, 1, 0u);
        t14 = g->edx;
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x10187460u), rd32(esi + 0x10u), 0);
        t16 = g->edx;
        wr32(sp0 - 0x18u, t15);
        g->ebx = arg2;
        g->esi = esi;
        g->edx = t16;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x101874f0u), self, 3, t15, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t17 = g->edx;
        edx = t17;
    }
    goto L_10187427;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101873a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101873a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
