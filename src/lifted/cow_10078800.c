/* f_0x10078800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10078800(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 2104u);

    wr32(sp0 - 0x80cu, in_ebx);
    wr32(sp0 - 0x810u, in_esi);
    wr32(sp0 - 0x814u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(sp0 - 0x808u);
    g->esp = sp0 - 0x814u;
    t2 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x818u, rd32(COW_IMG(0x103551e4u)));
    wr32(sp0 - 0x81cu, rd32(COW_IMG(0x103551e0u)));
    wr32(sp0 - 0x820u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x824u, 0u);
    g->edx = t4;
    t5 = rd32(COW_IMG(0x103551e0u));
    t6 = rd32(COW_IMG(0x103551e4u));
    t7 = rd32(sp0 - 0x804u);
    t8 = cow_cdecl(g, COW_IMG(0x10078350u), 4, 0u, COW_IMG(0x10354de0u), t5, t6);
    t9 = g->edx;
    if (t8 != 0u)
    {
        edx = t9;
        ebx = (in_ebx & 0xffffff00u) | (uint16_t)t2 != 0u;
        esi = t8;
        goto L_10078863;
    }
    edx = t9;
    ebx = (in_ebx & 0xffffff00u) | (uint16_t)t2 != 0u;
    edi = t6;
    if (rd32(edi + 4u) != 0u)
    {
        esi = rd32(edi + 4u);
        goto L_10078863;
    }
    g->edx = edx;
    return -arg3;
L_10078863: ;
    wr32(sp0 - 0x818u, esi);
    wr32(sp0 - 0x81cu, sp0 - 0x800u);
    g->edx = edx;
    g->esp = sp0 - 0x800u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), sp0 - 0x800u, 7, sp0 - 0x800u, esi, in_edi, in_esi, in_ebx, rd32(sp0 - 0x808u), rd32(sp0 - 0x804u));
    t10 = g->ecx;
    t11 = g->edx;
    edi = sp0 - 0x800u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x814u < sp0 - 0x81cu;
    pf = PARITY((uint8_t)(sp0 - 0x814u));
    af = (sp0 - 0x81cu ^ sp0 - 0x814u) >> 4u & 1u;
    zf = sp0 == 0x814u;
    sf = (int32_t)(sp0 - 0x814u) < 0;
    of = ((sp0 - 0x81cu ^ sp0 - 0x814u) & (sp0 - 0x814u ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_10078894;
    }
    edx = t11;
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_10078894: ;
    wr32(sp0 - 0x818u, sp0 - 0x800u);
    wr32(sp0 - 0x81cu, 0u);
    t12 = (ebx & 0xffffff00u) | (uint8_t)((-((uint8_t)ebx != 0u) & 0x13u) + 5u);
    wr32(sp0 - 0x820u, t12);
    g->edx = sp0 - 0x800u;
    g->esp = sp0 - 0x814u;
    t13 = cow_cdecl(g, COW_IMG(0x100e3400u), 3, t12, 0u, sp0 - 0x800u);
    t14 = g->edx;
    if ((uint8_t)t13 == 1u)
    {
        edx = t14;
        ebx = t12;
        goto L_100788c5;
    }
    edx = t14;
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_100788c5: ;
    if (rd32(COW_IMG(0x104dfd98u)) != 0u) goto L_100788e1;
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return -arg3;
L_100788e1: ;
    t15 = rd32(sp0 - 0x804u);
    wr32(sp0 - 0x818u, t15);
    wr32(sp0 - 0x81cu, 5u);
    wr32(sp0 - 0x820u, sp0 - 0x400u);
    g->ebx = ebx;
    g->esp = sp0 - 0x814u;
    cow_thiscall_cdecl(g, COW_IMG(0x100e3750u), sp0 - 0x400u, 3, sp0 - 0x400u, 5u, t15);
    wr32(sp0 - 0x824u, esi);
    t16 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
    wr32(sp0 - 0x828u, t16);
    wr32(sp0 - 0x82cu, sp0 - 0x400u);
    wr32(sp0 - 0x830u, COW_IMG(0x1035804cu));
    wr32(sp0 - 0x834u, sp0 - 0x800u);
    g->ebx = ebx;
    g->esp = sp0 - 0x820u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x800u, COW_IMG(0x1035804cu), sp0 - 0x400u, t16, esi);
    wr32(sp0 - 0x818u, 0u);
    wr32(sp0 - 0x81cu, 1u);
    wr32(sp0 - 0x820u, 0u);
    wr32(sp0 - 0x824u, sp0 - 0x808u);
    wr32(sp0 - 0x828u, sp0 - 0x800u);
    g->ebx = ebx;
    g->edx = sp0 - 0x808u;
    g->esp = sp0 - 0x814u;
    t17 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x800u, sp0 - 0x808u, 0u, 1u, 0u);
    t18 = g->edx;
    if (rd32(COW_IMG(0x10662da4u)) == 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t17;
        ecx = rd32(COW_IMG(0x10662da4u));
        edx = t18;
        g->edx = edx;
        g->esp = sp0 - 0x814u;
        cow_thiscall(g, COW_IMG(0x101adb80u), ecx, 0);
        t19 = g->edx;
        edx = t19;
    }
    g->ebx = rd32(sp0 - 0x80cu);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10078800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10078800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
