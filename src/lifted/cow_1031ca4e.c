/* f_0x1031ca4e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031ca4e(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    esi = rd32(COW_IMG(0x103d29d8u));
    loc_8 = self;
L_1031ca5c: ;
    if (rd32(esi + 0x10u) == 0xffffffffu)
    {
        edx = rd32(esi + 0x10u);
        goto L_1031cb07;
    }
    edx = rd32(esi + 0x10u);
    t1 = rd32(esi + 8u);
    t2 = edx + ((uint32_t)((int32_t)(t1 - esi - 0x18u) >> 3u) << 0xcu);
    if (t1 >= esi + 0x2018u) goto L_1031cac1;
    eax = t2;
    edi = t1;
    loc_8 = t2;
L_1031ca87: ;
    if ((int32_t)rd32(edi) < (int32_t)arg1) goto L_1031caaa;
    ecx = rd32(edi);
    if (rd32(edi + 4u) <= arg1) goto L_1031caaa;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1031cc56u), ecx, 5, eax, ecx, arg1, in_edi, in_esi);
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1031cb19;
    }
    edx = t4;
    wr32(edi + 4u, arg1);
    eax = loc_8;
L_1031caaa: ;
    if (edi + 8u < esi + 0x2018u)
    {
        edi = edi + 8u;
        loc_8 = eax + 0x1000u;
        eax = eax + 0x1000u;
        goto L_1031ca87;
    }
L_1031cac4: ;
    t5 = rd32(esi + 8u);
    t6 = rd32(esi + 0x10u);
    if (esi + 0x18u >= t5)
    {
        ecx = t6;
        loc_8 = t6;
        goto L_1031cb0a;
    }
    ecx = t6;
    edi = esi + 0x18u;
    loc_8 = t6;
    loc_c = t5;
L_1031cad7: ;
    if ((int32_t)rd32(edi) < (int32_t)arg1) goto L_1031caf6;
    eax = rd32(edi);
    if (rd32(edi + 4u) <= arg1) goto L_1031caf6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1031cc56u), ecx, 5, loc_8, eax, arg1, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        edx = t9;
        goto L_1031cb19;
    }
    ecx = t8;
    edx = t9;
    wr32(edi + 4u, arg1);
L_1031caf6: ;
    if (edi + 8u < loc_c)
    {
        edi = edi + 8u;
        loc_8 = loc_8 + 0x1000u;
        goto L_1031cad7;
    }
    loc_8 = loc_8 + 0x1000u;
L_1031cb0a: ;
    if (rd32(esi) == rd32(COW_IMG(0x103d29d8u))) goto L_1031cb29;
    esi = rd32(esi);
    goto L_1031ca5c;
L_1031cac1: ;
    goto L_1031cac4;
L_1031cb07: ;
    goto L_1031cb0a;
L_1031cb19: ;
    wr32(COW_IMG(0x103d29d8u), esi);
    wr32(edi, rd32(edi) - arg1);
    wr32(esi + 8u, edi);
L_1031cc51: ;
    g->edx = edx;
    return eax;
L_1031cb29: ;
    edi = COW_IMG(0x103d09b8u);
L_1031cb30: ;
    if (rd32(edi + 0x10u) == 0xffffffffu) goto L_1031cb3c;
    if (rd32(edi + 0xcu) != 0u) goto L_1031cb48;
L_1031cb3c: ;
    if (rd32(edi) == COW_IMG(0x103d09b8u)) goto L_1031cc1d;
    edi = rd32(edi);
    goto L_1031cb30;
L_1031cb48: ;
    t10 = rd32(edi + 0xcu);
    if (rd32(t10) != 0xffffffffu)
    {
        ebx = t10;
        esi = rd32(edi + 0x10u) + ((uint32_t)((int32_t)(t10 - edi - 0x18u) >> 3u) << 0xcu);
        loc_8 = 0u;
        goto L_1031cb77;
    }
    eax = t10;
    ebx = t10;
    esi = rd32(edi + 0x10u) + ((uint32_t)((int32_t)(t10 - edi - 0x18u) >> 3u) << 0xcu);
    loc_8 = 0u;
L_1031cb66: ;
    if ((int32_t)loc_8 >= 16) goto L_1031cb77;
    if (rd32(eax + 8u) == 0xffffffffu)
    {
        eax = eax + 8u;
        loc_8 = loc_8 + 1u;
        goto L_1031cb66;
    }
    loc_8 = loc_8 + 1u;
L_1031cb77: ;
    g->eax = loc_8 << 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_stdcall(g, rd32(COW_IMG(0x10329228u)), 4, esi, loc_8 << 0xcu, 0x1000u, 4u);   /* kernel32.dll!VirtualAlloc */
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != esi)
    {
        edx = t13;
        goto L_1031cc4f;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    loc_c = loc_8 << 0xcu;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3, esi, loc_c, 0u);
    if ((int32_t)loc_8 <= 0)
    {
        ecx = ebx;
        edx = loc_8;
    }
    else
    {
        ecx = ebx;
        edx = loc_8;
        eax = esi + 4u;
        loc_8 = edx;
L_1031cbb4: ;
        wr8(eax + 0xf4u, rd8(eax + 0xf4u) | 0xffu);
        wr32(eax - 4u, eax + 4u);
        wr32(eax, 0xf0u);
        wr32(ecx, 0xf0u);
        wr32(ecx + 4u, 0xf1u);
        if (loc_8 != 1u)
        {
            eax = eax + 0x1000u;
            ecx = ecx + 8u;
            loc_8 = loc_8 - 1u;
            goto L_1031cbb4;
        }
        ecx = ecx + 8u;
        edx = 0xf0u;
    }
    wr32(COW_IMG(0x103d29d8u), edi);
    eax = edi + 0x2018u;
L_1031cbea: ;
    if (ecx >= eax)
    {
        cf = ecx < eax;
        goto L_1031cbfa;
    }
    if (rd32(ecx) == 0xffffffffu) goto L_1031cbf8;
    ecx = ecx + 8u;
    goto L_1031cbea;
L_1031cbf8: ;
    cf = ecx < eax;
L_1031cbfa: ;
    t14 = -cf & ecx;
    wr32(edi + 0xcu, t14);
    wr8(esi + 8u, (uint8_t)arg1);
    wr32(edi + 8u, ebx);
    wr32(ebx, rd32(ebx) - arg1);
    wr32(esi + 4u, rd32(esi + 4u) - arg1);
    t15 = arg1 + esi + 8u;
    wr32(esi, t15);
    eax = esi + 0x100u;
    goto L_1031cc51;
L_1031cc1d: ;
    g->eax = COW_IMG(0x103d09b8u);
    g->esp = sp0 - 0x18u;
    t16 = cow_fastcall(g, COW_IMG(0x1031c756u), ecx, edx, 0);
    t17 = g->edx;
    if (t16 == 0u)
    {
        edx = t17;
        goto L_1031cc4f;
    }
    eax = t16;
    t18 = rd32(eax + 0x10u);
    wr8(t18 + 8u, (uint8_t)arg1);
    wr32(COW_IMG(0x103d29d8u), eax);
    t19 = arg1 + t18 + 8u;
    wr32(t18, t19);
    wr32(t18 + 4u, 0xf0u - arg1);
    wr32(eax + 0x18u, rd32(eax + 0x18u) - (uint8_t)arg1);
    eax = t18 + 0x100u;
    edx = (uint8_t)arg1;
    goto L_1031cc51;
L_1031cc4f: ;
    eax = 0u;
    goto L_1031cc51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ca4e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ca4e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
