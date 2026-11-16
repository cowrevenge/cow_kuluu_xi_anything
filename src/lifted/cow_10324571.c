/* f_0x10324571 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10324571(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_6c;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    t1 = rd16(rd32(sp0 + 0xcu));
    t2 = rd32(arg2);
    wr32(sp0 + 0xcu, t1);
    if (t2 == 1u)
    {
        ecx = t1;
        goto L_103245b6;
    }
    eax = t2 - 1u;
    ecx = t1;
    if (eax == 1u) goto L_103245b2;
    eax = eax - 1u;
    if (eax == 1u) goto L_103245ae;
    eax = eax - 1u;
    if (eax == 1u) goto L_103245aa;
    eax = eax - 1u;
    if (eax == 1u) goto L_103245b6;
    eax = eax - 1u;
    if (eax == 2u) goto L_103245a2;
    eax = eax - 2u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_1032460c;
    }
    wr32(sp0 - 0x6cu, 0x10u);
    loc_6c = 0x10u;
L_103245b8: ;
    wr32(sp0 - 0x6cu, ecx);
    wr32(sp0 - 0x70u, arg2 + 0x18u);
    wr32(sp0 - 0x74u, loc_6c);
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1031fc0au), ecx, 3, loc_6c, arg2 + 0x18u, ecx);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        edx = t5;
        ebx = loc_6c;
        if (arg1 == 0x10u) goto L_103245e3;
        if (arg1 == 0x16u) goto L_103245e3;
        if (arg1 == 0x1du) goto L_103245e3;
        t6 = rd32(sp0 - 0x24u) & 0xfffffffeu;
        wr32(sp0 - 0x24u, t6);
L_103245f5: ;
        wr32(sp0 - 0x6cu, arg2 + 0x18u);
        wr32(sp0 - 0x70u, arg2 + 8u);
        wr32(sp0 - 0x74u, arg1);
        wr32(sp0 - 0x78u, ebx);
        wr32(sp0 - 0x7cu, sp0 + 0xcu);
        wr32(sp0 - 0x80u, sp0 - 0x5cu);
        g->ecx = arg2 + 8u;
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x1031f957u), 6, sp0 - 0x5cu, sp0 + 0xcu, ebx, arg1, arg2 + 8u, arg2 + 0x18u);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
L_1032460c: ;
    wr32(sp0 - 0x6cu, 0xffffu);
    t11 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x70u, t11);
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, t11, 0xffffu, in_edi, in_esi);
    t13 = g->edx;
    if (rd32(arg2) == 8u)
    {
        eax = t12;
        ecx = 0xffffu;
        edx = t13;
        goto L_10324634;
    }
    eax = t12;
    edx = t13;
    if (rd32(COW_IMG(0x103d3810u)) != 0u)
    {
        ecx = 0xffffu;
        goto L_10324634;
    }
    wr32(sp0 - 0x6cu, arg2);
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t14 = cow_stdcall(g, COW_IMG(0x10324be5u), 0);
    t15 = g->edx;
    if (t14 != 0u)
    {
        edx = t15;
        goto L_1032463c;
    }
    eax = t14;
    ecx = arg2;
    edx = t15;
L_10324634: ;
    wr32(sp0 - 0x6cu, rd32(arg2));
    g->edx = edx;
    t16 = rd32(arg2);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x1031fea9u), 1, t16);
    t17 = g->edx;
    edx = t17;
L_1032463c: ;
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x64u);
    g->edi = rd32(sp0 - 0x68u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_103245a2: ;
    wr32(arg2, 1u);
    edx = in_edx;
    goto L_1032460c;
L_103245aa: ;
    wr32(sp0 - 0x6cu, 0x12u);
    loc_6c = 0x12u;
    goto L_103245b8;
L_103245ae: ;
    wr32(sp0 - 0x6cu, 0x11u);
    loc_6c = 0x11u;
    goto L_103245b8;
L_103245b2: ;
    wr32(sp0 - 0x6cu, 4u);
    loc_6c = 4u;
    goto L_103245b8;
L_103245b6: ;
    wr32(sp0 - 0x6cu, 8u);
    loc_6c = 8u;
    goto L_103245b8;
L_103245e3: ;
    d7 = rdf64(arg2 + 0x10u);
    wrf64(sp0 - 0x34u, d7);
    t8 = (rd32(sp0 - 0x24u) & 0xffffffe3u) | 3u;
    wr32(sp0 - 0x24u, t8);
    goto L_103245f5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324571(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10324571(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
