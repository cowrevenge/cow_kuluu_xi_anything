/* f_0x10105bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10105bd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, 0xffffffffu);
    if (rd8(arg2) == 0u) goto L_10105d01;
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    ecx = self;
    edx = in_edx;
    esi = arg2;
L_10105bf5: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x1cu, 8u);
        wr32(sp0 - 0x20u, (uint32_t)(int8_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (eax == 0u) goto L_10105c33;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_10105bf5;
    }
    return 0u;
L_10105c33: ;
    if (rd8(esi) == 0u) goto L_10105d01;
    eax = (eax & 0xffffff00u) | rd8(esi);
    ebx = 0u;
    edi = 0xffffffffu;
    loc_8 = 0xffffffffu;
L_10105c3d: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x1cu, 8u);
        wr32(sp0 - 0x20u, (uint32_t)(int8_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (eax != 0u) goto L_10105cf9;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(esi) * 2u) & 4u;
        ecx = (uint32_t)(int8_t)rd8(esi);
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, (uint32_t)(int8_t)rd8(esi));
        g->edx = edx;
        t7 = rd8(esi);
        g->esp = sp0 - 0x14u;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)t7, 4u, in_edi);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if (eax == 0u) goto L_10105d0b;
    if ((int32_t)ebx >= 2) goto L_10105d0b;
    t11 = rd8(esi);
    wr32(ebx * 4u + sp0 - 8u, 0u);
    if ((uint8_t)t11 == 0u) goto L_10105cf1;
    eax = (eax & 0xffffff00u) | t11;
L_10105cac: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 4u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, (uint32_t)(int8_t)eax);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)eax, 4u, in_edi);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    if (eax == 0u) goto L_10105d21;
    t15 = (uint32_t)(int8_t)rd8(esi) + rd32(ebx * 4u + sp0 - 8u) * 0xau - 0x30u;
    t16 = rd32(ebx * 4u + sp0 - 8u);
    t17 = rd8(esi + 1u);
    t18 = rd8(esi);
    wr32(ebx * 4u + sp0 - 8u, t15);
    if ((uint8_t)t17 != 0u)
    {
        eax = (t16 * 5u & 0xffffff00u) | t17;
        ecx = (uint32_t)(int8_t)t18;
        edx = t15;
        esi = esi + 1u;
        goto L_10105cac;
    }
    esi = esi + 1u;
L_10105cf1: ;
    edi = loc_8;
L_10105cf9: ;
    if ((int32_t)edi >= 0) goto L_10105d35;
    if (0u) goto L_10105d35;
L_10105d01: ;
    return 0u;
L_10105d0b: ;
    if (rd8(esi) == 0x3cu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10105d15;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax != 0x2du) goto L_10105d01;
L_10105d15: ;
    if (ebx != 0u) goto L_10105d01;
    ebx = 1u;
    esi = esi + 1u;
L_10105d29: ;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10105c3d;
    }
    goto L_10105cf9;
L_10105d21: ;
    edi = loc_8;
    goto L_10105d29;
L_10105d35: ;
    if (ebx != 0u) goto L_10105d61;
    if ((int32_t)edi < 0)
    {
        eax = 0u;
    }
    else
    {
        eax = ((int32_t)edi >= 256) - 1u & edi;
    }
    wr16(arg1 + 0x1cu, (uint16_t)eax);
    wr16(arg1 + 0x1eu, (uint16_t)eax);
    return esi;
L_10105d61: ;
    if ((int32_t)edi <= 255) goto L_10105d87;
    if (-1 < (int32_t)edi) goto L_10105d87;
L_10105d6d: ;
    wr16(arg1 + 0x1eu, 0u);
    wr16(arg1 + 0x1cu, 0u);
    return esi;
L_10105d87: ;
    if (1u) goto L_10105d93;
    if ((int32_t)edi >= -1) goto L_10105d6d;
L_10105d93: ;
    if ((int32_t)edi >= 0)
    {
        if ((int32_t)edi < 256)
        {
            eax = edi;
        }
        else
        {
            eax = 0xffu;
        }
    }
    else
    {
        eax = 0u;
    }
    wr16(arg1 + 0x1cu, (uint16_t)eax);
    if (1u) goto L_10105dc0;
    if (1u)
    {
        eax = 0xffffffffu;
        goto L_10105dc5;
    }
L_10105dc0: ;
    eax = 0xffu;
L_10105dc5: ;
    wr16(arg1 + 0x1eu, (uint16_t)eax);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105bd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105bd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
