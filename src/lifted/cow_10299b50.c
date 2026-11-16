/* f_0x10299b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10299b50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd8(arg1) != 0x53u) goto L_10299c2d;
    if (rd8(arg1 + 1u) != 0x51u) goto L_10299c2d;
    if (rd8(arg1 + 2u) != 0x4cu) goto L_10299c2d;
    if (rd8(arg1 + 3u) != 0x45u) goto L_10299c2d;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1 + 4u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 4u, 4u, 1u, arg1 + 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(arg1 & 1u))
    {
        eax = t1;
        edx = t3;
        ebx = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
        ebx = 1u;
    }
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 4u, 4u, 1u, eax, 0u);
    t5 = g->edx;
    t6 = rd32(sp0 - 4u);
    if (t6 == 0xa0002u)
    {
        ecx = t6;
        edx = t5;
        esi = t4;
        goto L_10299c1c;
    }
    eax = t6 - 0xa0002u;
    ecx = t6;
    edx = t5;
    esi = t4;
    if (eax == 3u) goto L_10299c0b;
    eax = eax - 3u;
    if (eax == 4u) goto L_10299bfa;
    eax = eax - 4u;
    wr32(sp0 - 0x14u, ecx);
    wr32(sp0 - 0x18u, COW_IMG(0x103bc148u));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc148u), ecx);
    t8 = g->ecx;
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc128u));
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc128u), esi);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return 0u;
L_10299bfa: ;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x10299c50u), 2, esi, ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return t9;
L_10299c0b: ;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10299e60u), 2, esi, ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return t10;
L_10299c1c: ;
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10299f00u), 2, esi, ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x10u);
    return t11;
L_10299c2d: ;
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, COW_IMG(0x103b7a04u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a04u), arg1);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc128u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc128u), arg1);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10299b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10299b50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
