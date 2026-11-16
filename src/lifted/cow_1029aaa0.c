/* f_0x1029aaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1029aaa0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(arg2) != 0x53u) goto L_1029abbf;
    if (rd8(arg2 + 1u) != 0x51u) goto L_1029abbf;
    if (rd8(arg2 + 2u) != 0x4cu) goto L_1029abbf;
    if (rd8(arg2 + 3u) != 0x45u) goto L_1029abbf;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 8u, 4u, 1u, arg2 + 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(rd8(sp0 - 8u) & 1u))
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
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    g->ecx = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 4u, 4u, 1u, eax, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(sp0 - 4u) != 0x150001u)
    {
        eax = rd32(sp0 - 4u);
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_1029ab93;
    }
    ecx = t5;
    esi = t4;
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = ecx;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, esi, ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((arg2 & 0x10000u) == 0u)
    {
        ecx = t8;
        edx = t9;
        esi = t7;
        goto L_1029ab68;
    }
    ecx = t8;
    edx = t9;
    esi = t7;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x1029a000u), 0);
    t11 = g->edx;
    wr32(sp0 - 0x18u, ebx);
    wr32(t10 + 0x1cu, arg1);
    wr32(sp0 - 0x1cu, arg2 & 0xfffeffffu);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, t10);
    cow_cdecl(g, COW_IMG(0x1029abf0u), 4, t10, esi, arg2 & 0xfffeffffu, ebx);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return t10;
L_1029ab68: ;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc3e8u));
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3e8u), rd32(sp0 - 0x14u));
    t12 = g->ecx;
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc3c0u));
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029ab93: ;
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc398u));
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc398u), eax);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bc3c0u));
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029abbf: ;
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7a04u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a04u), arg2);
    t14 = g->edx;
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc3c0u));
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029aaa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029aaa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
