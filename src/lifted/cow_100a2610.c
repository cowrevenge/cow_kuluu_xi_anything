/* f_0x100a2610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 200u);

    wr32(sp0 - 0xa0u, in_esi);
    if (rd8(arg3 + 0xau) & 1u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        t1 = rd16(arg3 + 0x1cu);
        wr32(sp0 - 0xa4u, t1);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0xa0u;
        cow_cdecl(g, COW_IMG(0x101cc590u), 1, t1);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if (rd8(arg3 + 0xbu) == 0u) goto L_100a269d;
    eax = rd8(arg3 + 0xbu);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100a2715;
    }
    eax = eax - 1u;
    if (rd32(COW_IMG(0x10662690u)) == 0u) goto L_100a2715;
    ecx = rd32(COW_IMG(0x10662690u));
    wr32(sp0 - 0xa4u, arg3 + 0xcu);
    g->esp = sp0 - 0xa0u;
    t4 = cow_fastcall(g, COW_IMG(0x1018de60u), ecx, edx, 1, arg3 + 0xcu);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100a2715;
    }
    eax = t4;
    edx = t5;
    wr32(sp0 - 0xa4u, arg3 + 0xcu);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, 0x78u);
    wr32(sp0 - 0xb0u, 0xau);
    wr32(sp0 - 0xb4u, 0x80u);
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    g->esp = sp0 - 0xa0u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 0x78u, 1u, arg3 + 0xcu);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xb0u, sp0 - 0x9cu);
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    edx = sp0 - 0x9cu;
L_100a270a: ;
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    t11 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_100a2715: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100a269d: ;
    wr32(sp0 - 0xa4u, arg3 + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), ecx, 1, arg3 + 0xcu);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_100a2715;
    }
    eax = t6;
    edx = t7;
    if (rd32(COW_IMG(0x10662690u)) == 0u) goto L_100a2715;
    ecx = rd32(COW_IMG(0x10662690u));
    wr32(sp0 - 0xa4u, arg3 + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0xa0u;
    t8 = cow_thiscall(g, COW_IMG(0x1018dd40u), ecx, 1, arg3 + 0xcu);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_100a2715;
    }
    eax = t8;
    edx = t9;
    wr32(sp0 - 0xa4u, arg3 + 0xcu);
    wr32(sp0 - 0xa8u, 0x16u);
    wr32(sp0 - 0xacu, sp0 - 0x98u);
    g->ecx = sp0 - 0x98u;
    g->esp = sp0 - 0xa0u;
    cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, arg3 + 0xcu);
    t10 = g->ecx;
    wr32(sp0 - 0xb0u, sp0 - 0x98u);
    wr32(sp0 - 0xb4u, 1u);
    wr32(sp0 - 0xb8u, 0x77u);
    wr32(sp0 - 0xbcu, 0xau);
    wr32(sp0 - 0xc0u, 0x80u);
    wr32(sp0 - 0xc4u, sp0 - 0x80u);
    g->esp = sp0 - 0xacu;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 0x77u, 1u, sp0 - 0x98u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, 0u);
    wr32(sp0 - 0xb0u, sp0 - 0x9cu);
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    edx = sp0 - 0x80u;
    goto L_100a270a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2610(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
