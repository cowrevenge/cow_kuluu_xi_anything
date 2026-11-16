/* f_0x10313990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10313990(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ecx = self;
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | rd8(arg1);
    esi = arg1 + 1u;
L_103139a8: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint8_t)ebx * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint8_t)ebx, 8u, in_edi);
        t2 = g->edx;
        eax = t1;
        ecx = 8u;
        edx = t2;
    }
    if (eax == 0u) goto L_103139d8;
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    esi = esi + 1u;
    goto L_103139a8;
L_103139d8: ;
    if ((uint8_t)ebx != 0x2du)
    {
        loc_8 = esi;
        goto L_103139e6;
    }
    wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) | 2u);
L_103139eb: ;
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    loc_8 = esi + 1u;
    esi = esi + 1u;
L_103139f1: ;
    if ((int32_t)rd32(sp0 + 0xcu) < 0) goto L_10313b85;
    eax = rd32(sp0 + 0xcu);
    if (eax == 1u) goto L_10313b85;
    if ((int32_t)eax > 36) goto L_10313b85;
    if (eax != 0u) goto L_10313a39;
    if ((uint8_t)ebx == 0x30u) goto L_10313a23;
    wr32(sp0 + 0xcu, 0xau);
L_10313a55: ;
    t3 = cow_divu(g, 0xffffffffu, rd32(sp0 + 0xcu));
    t4 = cow_modu(g, 0xffffffffu, rd32(sp0 + 0xcu));
    ecx = 0x10u;
    edx = t4;
    loc_c = 0u;
    loc_10 = t3;
L_10313a65: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        esi = (uint8_t)ebx;
        eax = rd8(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
    }
    else
    {
        esi = (uint8_t)ebx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 4u, in_edi);
        t6 = g->edx;
        eax = t5;
        ecx = 4u;
        edx = t6;
    }
    if (eax == 0u) goto L_10313a94;
    ecx = (uint32_t)(int8_t)ebx - 0x30u;
L_10313ac6: ;
    if (ecx >= rd32(sp0 + 0xcu)) goto L_10313b01;
    wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) | 8u);
    if (loc_c < loc_10)
    {
        esi = loc_c;
        goto L_10313aeb;
    }
    esi = loc_c;
    zf = loc_c == loc_10;
    if (!zf) goto L_10313ae5;
    t11 = cow_divu(g, 0xffffffffu, rd32(sp0 + 0xcu));
    t12 = cow_modu(g, 0xffffffffu, rd32(sp0 + 0xcu));
    if (ecx <= t12)
    {
        edx = t12;
        goto L_10313aeb;
    }
    edx = t12;
L_10313ae5: ;
    wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) | 4u);
L_10313af4: ;
    ebx = (ebx & 0xffffff00u) | rd8(loc_8);
    loc_8 = loc_8 + 1u;
    goto L_10313a65;
L_103139e6: ;
    if ((uint8_t)ebx != 0x2bu) goto L_103139f1;
    goto L_103139eb;
L_10313a23: ;
    if (rd8(esi) == 0x78u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10313a36;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax == 0x58u) goto L_10313a36;
    wr32(sp0 + 0xcu, 8u);
    goto L_10313a55;
L_10313a36: ;
    wr32(sp0 + 0xcu, 0x10u);
L_10313a39: ;
    if (rd32(sp0 + 0xcu) == 0x10u)
    {
        if ((uint8_t)ebx == 0x30u)
        {
            if (rd8(esi) == 0x78u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                goto L_10313a4d;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
            if ((uint8_t)eax != 0x58u) goto L_10313a55;
L_10313a4d: ;
            ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
            loc_8 = esi + 2u;
        }
    }
    goto L_10313a55;
L_10313a94: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd16(esi * 2u + rd32(COW_IMG(0x103d0030u))) & 0x103u;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, esi, 0x103u, in_edi);
        t8 = g->edx;
        eax = t7;
        ecx = 0x103u;
        edx = t8;
    }
    if (eax == 0u) goto L_10313b01;
    g->esp = sp0 - 0x1cu;
    t9 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, (uint32_t)(int8_t)ebx);
    t10 = g->edx;
    eax = t9;
    ecx = t9 - 0x37u;
    edx = t10;
    goto L_10313ac6;
L_10313aeb: ;
    t13 = ecx + esi * rd32(sp0 + 0xcu);
    loc_c = t13;
    goto L_10313af4;
L_10313b01: ;
    if ((rd32(sp0 + 0x10u) & 8u) != 0u)
    {
        eax = rd32(sp0 + 0x10u);
        loc_8 = loc_8 - 1u;
        if ((eax & 4u) != 0u) goto L_10313b42;
        if (eax & 1u) goto L_10313b69;
        if ((eax & 2u) == 0u)
        {
            eax = eax & 2u;
            goto L_10313b39;
        }
        eax = eax & 2u;
        if (loc_c > 0x80000000u) goto L_10313b42;
L_10313b39: ;
        if (eax != 0u) goto L_10313b69;
        if (loc_c <= 0x7fffffffu) goto L_10313b69;
L_10313b42: ;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t14 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
        t15 = g->edx;
        t16 = rd8(sp0 + 0x10u);
        wr32(t14, 0x22u);
        if (!(t16 & 1u))
        {
            edx = t15;
            t17 = ((rd32(sp0 + 0x10u) & 2u) != 0u) + 0x7fffffffu;
            loc_c = t17;
        }
        else
        {
            edx = t15;
            loc_c = 0xffffffffu;
        }
    }
    else
    {
        loc_8 = loc_8 - 1u;
        if (arg2 != 0u)
        {
            loc_8 = arg1;
        }
        loc_c = 0u;
    }
L_10313b69: ;
    if (arg2 != 0u)
    {
        wr32(arg2, loc_8);
    }
    if ((rd8(sp0 + 0x10u) & 2u) != 0u)
    {
        loc_c = -loc_c;
    }
    eax = loc_c;
L_10313b90: ;
    g->edx = edx;
    return eax;
L_10313b85: ;
    if (arg2 != 0u)
    {
        wr32(arg2, arg1);
    }
    eax = 0u;
    goto L_10313b90;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
