/* f_0x100185a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100185a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 4u, self);
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    g->ecx = self + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x101be510u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        goto L_1001865a;
    }
    ecx = t2;
    edx = t3;
    esi = t1;
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1001865a;
    }
    edx = t5;
    ebx = t4;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x101be470u), sp0 + 4u, self + 4u, g->edx, 0, 3, sp0 + 4u, arg1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        ecx = t7;
        goto L_10018623;
    }
    edx = t8;
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, COW_IMG(0x101be590u), self + 4u, 3, arg1, ebx, esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        edx = t11;
        goto L_10018617;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, arg1, 0, 1, arg1);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return t13;
L_10018617: ;
    wr32(sp0 - 0x18u, arg1);
    g->edi = self + 4u;
    g->ecx = self + 4u;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, arg1);
    t14 = g->ecx;
    ecx = t14;
L_10018623: ;
    if ((int32_t)esi <= 0)
    {
        eax = 0u;
        edx = 0u;
        edi = 0u;
        goto L_1001864a;
    }
    eax = 0u;
    edx = 0u;
    edi = 0u;
L_1001862d: ;
    if (eax <= arg2)
    {
        cf = eax < arg2;
        pf = PARITY((uint8_t)(eax - arg2));
        zf = eax == arg2;
        sf = (int32_t)(eax - arg2) < 0;
        of = ((eax ^ arg2) & (eax ^ eax - arg2)) >> 0x1fu;
    }
    else
    {
        eax = 0u;
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
    }
    if ((int32_t)(edx + 1u) < (int32_t)esi)
    {
        edi = edi + ((uint32_t)(int8_t)rd8(ebx + edx) << (eax * 4u & 0x1fu));
        eax = eax + 1u;
        edx = edx + 1u;
        goto L_1001862d;
    }
    ecx = eax * 4u;
    edi = edi + ((uint32_t)(int8_t)rd8(ebx + edx) << (eax * 4u & 0x1fu));
    eax = eax + 1u;
    edx = edx + 1u;
L_1001864a: ;
    wr32(sp0 - 0x18u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
    wr32(rd32(sp0 - 4u) + 8u, edi);
    eax = t15;
L_1001865a: ;
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100185a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100185a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
