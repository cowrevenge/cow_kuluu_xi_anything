/* f_0x10320a48 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10320a48(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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

    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x12u, in_edi, in_esi);
    t1 = g->edx;
    ecx = 0x12u;
    edx = t1;
    ebx = 0u;
    ebp = COW_IMG(0x109f82e0u);
    edi = 0xffffffffu;
    loc_4 = 0u;
    loc_8 = 0u;
L_10320a68: ;
    if (rd32(ebp) == 0u) goto L_10320b0c;
    esi = rd32(ebp);
    eax = esi + 0x480u;
L_10320a79: ;
    if (esi >= eax) goto L_10320af1;
    if (rd8(esi + 4u) & 1u) goto L_10320ac7;
    if (rd32(esi + 8u) == 0u)
    {
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t2 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, ecx, edx, 1, 3, 0x11u, in_edi, in_esi);
        t3 = g->edx;
        if (rd32(esi + 8u) != 0u)
        {
            eax = t2;
            ecx = 0x11u;
            edx = t3;
        }
        else
        {
            edx = t3;
            g->eax = esi + 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t4 = cow_thiscall(g, rd32(COW_IMG(0x10329184u)), 0x11u, 1, esi + 0xcu);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(esi + 8u, rd32(esi + 8u) + 1u);
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t7 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x11u, in_edi, in_esi);
        t8 = g->edx;
        eax = t7;
        ecx = 0x11u;
        edx = t8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), ecx, 1, esi + 0xcu);
    t10 = g->ecx;
    t11 = g->edx;
    if (!(rd8(esi + 4u) & 1u)) goto L_10320ad4;
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = esi + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, ebx);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    ebx = loc_8;
L_10320ac7: ;
    eax = rd32(ebp) + 0x480u;
    esi = esi + 0x24u;
    goto L_10320a79;
L_10320ad4: ;
    wr32(esi, 0xffffffffu);
    t14 = cow_divs(g, esi - rd32(ebp), 0x24u);
    t15 = cow_mods(g, esi - rd32(ebp), 0x24u);
    if (loc_4 + t14 != 0xffffffffu)
    {
        eax = t14;
        ecx = 0x24u;
        edx = t15;
        edi = loc_4 + t14;
        goto L_10320b5a;
    }
    eax = t14;
    edx = t15;
    edi = loc_4 + t14;
    ecx = 0x24u;
    ebx = loc_8;
L_10320af1: ;
    if ((int32_t)(ebp + 4u) < (int32_t)COW_IMG(0x109f83e0u))
    {
        ebp = ebp + 4u;
        loc_4 = loc_4 + 0x20u;
        loc_8 = ebx + 1u;
        ebx = ebx + 1u;
        goto L_10320a68;
    }
    loc_4 = loc_4 + 0x20u;
    loc_8 = ebx + 1u;
L_10320b5a: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x12u, in_edi, in_esi);
    t20 = g->edx;
    g->edx = t20;
    return edi;
L_10320b0c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x480u, in_edi, in_esi);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        ecx = 0x480u;
        edx = t17;
    }
    else
    {
        eax = t16;
        wr32(COW_IMG(0x109f83e0u), rd32(COW_IMG(0x109f83e0u)) + 0x20u);
        wr32(COW_IMG(0x109f82e0u) + ebx * 4u, eax);
        ecx = COW_IMG(0x109f82e0u) + ebx * 4u;
        edx = eax + 0x480u;
L_10320b32: ;
        if (eax >= edx) goto L_10320b4e;
        wr8(eax + 4u, 0u);
        wr32(eax, 0xffffffffu);
        wr32(eax + 8u, 0u);
        wr8(eax + 5u, 0xau);
        eax = eax + 0x24u;
        edx = rd32(ecx) + 0x480u;
        goto L_10320b32;
    }
    goto L_10320b5a;
L_10320b4e: ;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t18 = cow_call_regs(g, COW_IMG(0x10320d4fu), g->eax, g->ecx, edx, 1, 1, ebx << 5u);
    t19 = g->edx;
    eax = t18;
    ecx = ebx << 5u;
    edx = t19;
    edi = ebx << 5u;
    goto L_10320b5a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320a48(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10320a48(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
