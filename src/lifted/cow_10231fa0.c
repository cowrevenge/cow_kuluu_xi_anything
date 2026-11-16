/* f_0x10231fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10231fa0(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 172u);

    wr32(sp0 - 0x8cu, in_ebx);
    wr32(sp0 - 0x90u, in_esi);
    wr32(sp0 - 0x94u, in_edi);
    wr8(sp0 - 0x80u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x7fu;
    eax = 0u;
    ecx = 0x1fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    if (rd8(self + 0x8bu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x8bu);
        goto L_1023203f;
    }
    if (rd32(self + 0x68u) != 2u)
    {
        eax = rd32(self + 0x68u);
        goto L_1023201b;
    }
    eax = rd32(self + 0x68u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_stdcall(g, COW_IMG(0x10230ad0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint16_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t1;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t1;
        esi = esi + 1u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x94u;
    t7 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint16_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = esi + 1u;
    }
    wr32(sp0 - 0x98u, 0x1eu);
    wr32(sp0 - 0x9cu, esi);
    wr32(sp0 - 0xa0u, 0x6du);
    wr32(sp0 - 0xa4u, 0xcu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6du);
    t11 = g->edx;
    wr32(sp0 - 0xa0u, t10);
    wr32(sp0 - 0xa4u, COW_IMG(0x103869e4u));
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->ebx = self;
    g->esp = sp0 - 0x94u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x103869e4u), t10, rd32(sp0 - 0x9cu), 0x1eu);
    esi = sp0 - 0x80u;
L_10232049: ;
    wr32(sp0 - 0x98u, sp0 - 0x84u);
    wr32(sp0 - 0x9cu, sp0 - 0x88u);
    g->eax = sp0 - 0x88u;
    g->esp = sp0 - 0x94u;
    t15 = cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 0x88u, sp0 - 0x84u);
    if (esi != 0u)
    {
        eax = t15;
        wr32(sp0 - 0x98u, 0x80808080u);
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, esi);
        t16 = rd32(sp0 - 0x84u) + 0xau;
        wr32(sp0 - 0xa4u, t16);
        t17 = rd32(sp0 - 0x88u) + 0x3cu;
        wr32(sp0 - 0xa8u, t17);
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x10129f00u), 11, t17, t16, esi, 0u, 0x80808080u, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u));
    }
    g->ebx = rd32(sp0 - 0x8cu);
    g->esi = rd32(sp0 - 0x90u);
    g->edi = rd32(sp0 - 0x94u);
    return;
L_1023201b: ;
    if (eax != 4u)
    {
        wr32(sp0 - 0x98u, 0x6eu);
        wr32(sp0 - 0x9cu, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x94u;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6eu);
        eax = t13;
    }
    else
    {
        wr32(sp0 - 0x98u, 0x208u);
        wr32(sp0 - 0x9cu, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x94u;
        t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x208u);
        eax = t12;
    }
L_10232047: ;
    esi = eax;
    goto L_10232049;
L_1023203f: ;
    g->eax = eax;
    g->esp = sp0 - 0x94u;
    t14 = cow_thiscall(g, COW_IMG(0x102306d0u), self + 0x70u, 0);
    eax = t14;
    goto L_10232047;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231fa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
