/* f_0x101a1cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (rd32(self + 0x21c4u) == 0xffffffffu) goto L_101a1e00;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        g->edx = in_edx;
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x101a1cb0u), self, 0);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u);
        goto L_101a1df5;
    }
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd32(eax + 0xc4u) != 0u)
    {
        ecx = rd32(eax + 0xc4u);
        goto L_101a1df5;
    }
    t3 = rd32(self + 0x21c4u);
    wr32(sp0 - 0x4cu, t3);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t4 = cow_thiscall(g, COW_IMG(0x101a1910u), self + 0x2048u, 1, t3);
    t5 = g->ecx;
    if (t4 == 0u) goto L_101a1de3;
    eax = t4;
    ecx = t5;
    edi = t3;
    if (rd8(eax) == 0u) goto L_101a1de3;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx != 0x2fu) goto L_101a1d44;
    if (rd8(eax + 1u) != 0x2fu) goto L_101a1d44;
    wr32(self + 0x21c4u, edi + 1u);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return 1u;
L_101a1d44: ;
    edx = sp0 - 0x40u - eax;
L_101a1d4a: ;
    t6 = rd8(eax);
    wr8(eax + edx, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_101a1d4a;
    }
    ecx = (ecx & 0xffffff00u) | t6;
    if (rd32(self + 0x21c8u) == 0u)
    {
        eax = rd32(self + 0x21c8u);
        goto L_101a1d8c;
    }
    eax = rd32(self + 0x21c8u);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t7 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    if (t7 - rd32(self + 0x21ccu) < rd32(self + 0x21c8u)) goto L_101a1e00;
    wr32(self + 0x21c8u, 0u);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return 1u;
L_101a1d8c: ;
    wr32(sp0 - 0x4cu, self + 0x21c8u);
    wr32(sp0 - 0x50u, self + 0x21ccu);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    g->ecx = self;
    g->esp = sp0 - 0x48u;
    t8 = cow_call_regs(g, COW_IMG(0x101a2480u), eax, g->ecx, sp0 - 0x40u, 0, 3, sp0 - 0x40u, self + 0x21ccu, self + 0x21c8u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_101a1dbc;
    }
    t11 = rd32(self + 0x21c4u) + 1u;
    t12 = rd32(sp0 - 0x48u);
    wr32(self + 0x21c4u, t11);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = t12;
    return 1u;
L_101a1dbc: ;
    wr32(sp0 - 0x4cu, 2u);
    wr32(sp0 - 0x50u, sp0 - 0x40u);
    t13 = rd32(self + 0x21c4u) + 1u;
    wr32(self + 0x21c4u, t13);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 2u);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return 1u;
L_101a1de3: ;
    wr32(self + 0x21c4u, 0xffffffffu);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return 0u;
L_101a1df5: ;
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t14 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    wr32(self + 0x21ccu, t14);
L_101a1e00: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
