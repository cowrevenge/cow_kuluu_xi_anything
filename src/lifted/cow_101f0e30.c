/* f_0x101f0e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101f0e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u) goto L_101f0e4d;
    return arg3 & 0xffffff00u;
L_101f0e4d: ;
    if (arg1 - 0xau > 6u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
        goto L_101f0e9c;
    }
    t1 = rd32(COW_IMG(0x101f0ffcu) + arg1 * 4u - 0x28u);
    switch (t1 - RD)
    {
    case 0x101f0e66u: goto L_101f0e66;
    case 0x101f0e6eu: goto L_101f0e6e;
    case 0x101f0e76u: goto L_101f0e76;
    case 0x101f0e7eu: goto L_101f0e7e;
    case 0x101f0e86u: goto L_101f0e86;
    case 0x101f0e8eu: goto L_101f0e8e;
    case 0x101f0e96u: goto L_101f0e96;
    default: rt_fatal(g, COW_IMG(0x101f0e5fu), "switch");
    }
    return 0;
L_101f0e66: ;
    ecx = rd32(COW_IMG(0x10666e50u));
L_101f0e9c: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x1021cb80u), ecx, 1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        esi = t2;
        goto L_101f0eb6;
    }
    eax = t2;
    edx = t4;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f0e6e: ;
    ecx = rd32(COW_IMG(0x10666e54u));
    goto L_101f0e9c;
L_101f0e76: ;
    ecx = rd32(COW_IMG(0x10666e58u));
    goto L_101f0e9c;
L_101f0e7e: ;
    ecx = rd32(COW_IMG(0x10666e5cu));
    goto L_101f0e9c;
L_101f0e86: ;
    ecx = rd32(COW_IMG(0x10666e60u));
    goto L_101f0e9c;
L_101f0e8e: ;
    ecx = rd32(COW_IMG(0x10666e64u));
    goto L_101f0e9c;
L_101f0e96: ;
    ecx = rd32(COW_IMG(0x10666e68u));
    goto L_101f0e9c;
L_101f0eb6: ;
    if (rd8(esi + 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 2u);
        goto L_101f0ec5;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 2u);
    g->edx = edx;
    return eax;
L_101f0ec5: ;
    t5 = (ecx & 0xffff0000u) | rd16(esi);
    g->eax = eax;
    g->edx = rd32(self);
    t6 = rd32(self);
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, rd32(t6 + 0x50u), self, 4, arg1, eax, t5, esi);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_101f0edf;
    eax = t7;
    edx = t8;
    g->edx = edx;
    return eax;
L_101f0edf: ;
    g->edx = rd16(esi);
    t9 = rd32(COW_IMG(0x10621808u));
    t10 = rd16(esi);
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x1015bc40u), t9, 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        edi = t11;
        goto L_101f0f00;
    }
    eax = t11;
    edx = t13;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f0f00: ;
    wr8(edi + 0x1b3u, (uint8_t)(rd8(edi + 0x1b3u) + 1u));
    t14 = rd8(edi + 0x1b3u);
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, edi, in_edi, in_esi);
    t16 = g->edx;
    wr32(COW_IMG(0x10663780u), arg1);
    if (rd16(esi) != 0xffffu)
    {
        ebp = t15;
        g->eax = arg1;
        g->edx = rd32(self);
        t17 = rd32(self);
        g->esp = sp0 - 0x14u;
        t18 = cow_thiscall(g, rd32(t17 + 0x30u), self, 2, esi, ebp);
        t19 = g->edx;
        eax = t18;
        edx = t19;
        ebx = t18;
    }
    else
    {
        edx = t16;
        ebp = t15;
        eax = arg1;
        ebx = 0x80404040u;
    }
    wr32(COW_IMG(0x10663780u), 0u);
    if (ebx != 0u) goto L_101f0f61;
    t20 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t20 - 1u));
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f0f61: ;
    if (ebx != 0x80804020u)
    {
        if (rd8(esi + 8u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 8u);
            if ((uint8_t)eax != 5u)
            {
                if ((uint8_t)eax != 0x1bu)
                {
                    ebx = 0x80404040u;
                }
            }
        }
    }
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg3, edx, 4, 0u, 0x16u, esi, 0x80808080u);
    t21 = g->edx;
    g->eax = rd16(esi);
    t22 = rd16(esi);
    t23 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg3, t21, 4, 1u, 0x19u, t22, ebx);
    t24 = g->edx;
    if (ebp == 0u)
    {
        eax = t23;
    }
    else
    {
        eax = t23;
        edx = t24;
        if (rd32(ebp + 0x14c0u) != 0u)
        {
            ebp = rd32(ebp + 0x14c0u);
            if (rd16(ebp) <= 1u)
            {
                eax = (eax & 0xffffff00u) | rd16(ebp) > 1u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd16(ebp) > 1u;
                t25 = rd32(esi + 4u);
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t26 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg3, edx, 4, 2u, 7u, t25, 0x80808080u);
                eax = t26;
            }
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t27 = rd32(self);
    g->esp = sp0 - 0x14u;
    t28 = cow_thiscall(g, rd32(t27 + 8u), self, 0);
    t29 = g->edx;
    wr32(arg3 + 0x4cu, t28);
    wr32(arg3 + 0x48u, esi);
    t30 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t30 - 1u));
    g->edx = t29;
    return (t28 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f0e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f0e30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
